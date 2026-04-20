-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BunkerSilo = {}
local BunkerSilo_mt = Class(BunkerSilo, Object)
InitStaticObjectClass(BunkerSilo, "BunkerSilo", ObjectIds.OBJECT_BUNKER_SILO)
BunkerSilo.STATE_FILL = 0
BunkerSilo.STATE_CLOSED = 1
BunkerSilo.STATE_FERMENTED = 2
BunkerSilo.STATE_DRAIN = 3
BunkerSilo.NUM_STATES = 4
BunkerSilo.COMPACTING_BASE_MASS = 5
BunkerSilo.MILLISECONDS_PER_DAY = 86400000
function BunkerSilo.onCreate(v0, v1)
  Logging.error("BunkerSilo.onCreate is deprecated!")
end
function BunkerSilo.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.interactionTriggerNode = nil
  v3.bunkerSiloArea = {offsetFront = 0, offsetBack = 0}
  v3.acceptedFillTypes = {}
  v3.inputFillType = FillType.CHAFF
  v3.outputFillType = FillType.SILAGE
  v3.fermentingFillType = FillType.TARP
  v3.isOpenedAtFront = false
  v3.isOpenedAtBack = false
  v3.distanceToCompactedFillLevel = 100
  v3.fermentingPercent = 0
  v3.fillLevel = 0
  v3.compactedFillLevel = 0
  v3.compactedPercent = 0
  v3.emptyThreshold = 100
  v3.playerInRange = false
  v3.vehiclesInRange = {}
  v3.numVehiclesInRange = 0
  v3.siloIsFullWarningTimer = 0
  v3.siloIsFullWarningDuration = 2000
  v3.updateTimer = 0
  local v4 = BunkerSiloActivatable.new(v3)
  v3.activatable = v4
  v3.state = BunkerSilo.STATE_FILL
  v4 = v3:getNextDirtyFlag()
  v3.bunkerSiloDirtyFlag = v4
  v4:subscribe(MessageType.HOUR_CHANGED, v3.onHourChanged, v3)
  return v3
end
function BunkerSilo:load(components, xmlFile, key, i3dMappings)
  local v6 = xmlFile:getValue(key .. ".area#startNode", nil, components, i3dMappings)
  self.bunkerSiloArea.start = v6
  v6 = xmlFile:getValue(key .. ".area#widthNode", nil, components, i3dMappings)
  self.bunkerSiloArea.width = v6
  v6 = xmlFile:getValue(key .. ".area#heightNode", nil, components, i3dMappings)
  self.bunkerSiloArea.height = v6
  local v8, v9, v10 = getWorldTranslation(self.bunkerSiloArea.start)
  self.bunkerSiloArea.sx = v8
  self.bunkerSiloArea.sy = v9
  self.bunkerSiloArea.sz = v10
  v8, v9, v10 = getWorldTranslation(self.bunkerSiloArea.width)
  self.bunkerSiloArea.wx = v8
  self.bunkerSiloArea.wy = v9
  self.bunkerSiloArea.wz = v10
  v8, v9, v10 = getWorldTranslation(self.bunkerSiloArea.height)
  self.bunkerSiloArea.hx = v8
  self.bunkerSiloArea.hy = v9
  self.bunkerSiloArea.hz = v10
  self.bunkerSiloArea.dhx = self.bunkerSiloArea.hx - self.bunkerSiloArea.sx
  self.bunkerSiloArea.dhy = self.bunkerSiloArea.hy - self.bunkerSiloArea.sy
  self.bunkerSiloArea.dhz = self.bunkerSiloArea.hz - self.bunkerSiloArea.sz
  v8, v9, v10 = MathUtil.vector3Normalize(self.bunkerSiloArea.dhx, self.bunkerSiloArea.dhy, self.bunkerSiloArea.dhz)
  self.bunkerSiloArea.dhx_norm = v8
  self.bunkerSiloArea.dhy_norm = v9
  self.bunkerSiloArea.dhz_norm = v10
  self.bunkerSiloArea.dwx = self.bunkerSiloArea.wx - self.bunkerSiloArea.sx
  self.bunkerSiloArea.dwy = self.bunkerSiloArea.wy - self.bunkerSiloArea.sy
  self.bunkerSiloArea.dwz = self.bunkerSiloArea.wz - self.bunkerSiloArea.sz
  v8, v9, v10 = MathUtil.vector3Normalize(self.bunkerSiloArea.dwx, self.bunkerSiloArea.dwy, self.bunkerSiloArea.dwz)
  self.bunkerSiloArea.dwx_norm = v8
  self.bunkerSiloArea.dwy_norm = v9
  self.bunkerSiloArea.dwz_norm = v10
  self.bunkerSiloArea.inner = {}
  v6 = xmlFile:getValue(key .. ".innerArea#startNode", self.bunkerSiloArea.start, components, i3dMappings)
  self.bunkerSiloArea.inner.start = v6
  v6 = xmlFile:getValue(key .. ".innerArea#widthNode", self.bunkerSiloArea.width, components, i3dMappings)
  self.bunkerSiloArea.inner.width = v6
  v6 = xmlFile:getValue(key .. ".innerArea#heightNode", self.bunkerSiloArea.height, components, i3dMappings)
  self.bunkerSiloArea.inner.height = v6
  v8, v9, v10 = getWorldTranslation(self.bunkerSiloArea.inner.start)
  self.bunkerSiloArea.inner.sx = v8
  self.bunkerSiloArea.inner.sy = v9
  self.bunkerSiloArea.inner.sz = v10
  v8, v9, v10 = getWorldTranslation(self.bunkerSiloArea.inner.width)
  self.bunkerSiloArea.inner.wx = v8
  self.bunkerSiloArea.inner.wy = v9
  self.bunkerSiloArea.inner.wz = v10
  v8, v9, v10 = getWorldTranslation(self.bunkerSiloArea.inner.height)
  self.bunkerSiloArea.inner.hx = v8
  self.bunkerSiloArea.inner.hy = v9
  self.bunkerSiloArea.inner.hz = v10
  local v5 = xmlFile:getValue(key .. ".interactionTrigger#node", nil, components, i3dMappings)
  self.interactionTriggerNode = v5
  if self.interactionTriggerNode ~= nil then
    addTrigger(self.interactionTriggerNode, "interactionTriggerCallback", self)
  end
  self.acceptedFillTypes = {}
  v5 = xmlFile:getValue(key .. "#acceptedFillTypes", "chaff grass_windrow dryGrass_windrow")
  v5 = v5:split(" ")
  v9 = table.getn(v5)
  -- TODO: structure LOP_FORNPREP (pc 413, target 439)
  v9 = v9:getFillTypeIndexByName(v5[1])
  if v9 ~= nil then
    self.acceptedFillTypes[v9] = true
  else
    local v12 = tostring(v5[1])
    Logging.warning("'%s' is an invalid fillType for bunkerSilo '%s'!", v12, key .. "#acceptedFillTypes")
  end
  -- TODO: structure LOP_FORNLOOP (pc 438, target 414)
  v6 = xmlFile:getValue(key .. "#inputFillType", "chaff")
  local v7 = v7:getFillTypeIndexByName(v6)
  if v7 ~= nil then
    self.inputFillType = v7
  else
    v10 = tostring(v6)
    Logging.warning("'%s' is an invalid input fillType for bunkerSilo '%s'!", v10, key .. "#inputFillType")
  end
  v8 = xmlFile:getValue(key .. "#outputFillType", "silage")
  v9 = v9:getFillTypeIndexByName(v8)
  if v9 ~= nil then
    self.outputFillType = v9
  else
    v12 = tostring(v8)
    Logging.warning("'%s' is an invalid output fillType for bunkerSilo '%s'!", v12, key .. "#outputFillType")
  end
  v10:setConvertingFillTypeAreas(self.bunkerSiloArea, self.acceptedFillTypes, self.inputFillType)
  v10 = xmlFile:getValue(key .. "#distanceToCompactedFillLevel", self.distanceToCompactedFillLevel)
  self.distanceToCompactedFillLevel = v10
  v10 = xmlFile:getValue(key .. "#openingLength", 5)
  self.openingLength = v10
  v10 = xmlFile:getValue(key .. ".wallLeft#node", nil, components, i3dMappings)
  if v10 ~= nil then
    self.wallLeft = {node = v10, visible = true}
    v12 = xmlFile:getValue(key .. ".wallLeft#collision", nil, components, i3dMappings)
    self.wallLeft.collision = v12
  end
  local rightWallNode = xmlFile:getValue(key .. ".wallRight#node", nil, components, i3dMappings)
  if rightWallNode ~= nil then
    self.wallRight = {node = rightWallNode, visible = true}
    local v13 = xmlFile:getValue(key .. ".wallRight#collision", nil, components, i3dMappings)
    self.wallRight.collision = v13
  end
  self.fillLevel = 0
  self.distanceToCompactedFillLevel = self.distanceToCompactedFillLevel / g_currentMission.missionInfo.economicDifficulty
  self:setState(BunkerSilo.STATE_FILL)
  return true
end
function BunkerSilo:delete()
  if self.interactionTriggerNode ~= nil then
    removeTrigger(self.interactionTriggerNode)
  end
  v1:removeFixedFillTypesArea(self.bunkerSiloArea)
  v1:removeConvertingFillTypeAreas(self.bunkerSiloArea)
  v1:unsubscribeAll(self)
  v1:removeActivatable(self.activatable)
  local v2 = v2:superClass()
  v2.delete(self)
end
function BunkerSilo:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    v3 = streamReadUIntN(streamId, 3)
    self:setState(v3)
    v4 = streamReadBool(streamId)
    self.isOpenedAtFront = v4
    v4 = streamReadBool(streamId)
    self.isOpenedAtBack = v4
    v4 = streamReadFloat32(streamId)
    self.fillLevel = v4
    local v7 = streamReadUIntN(streamId, 8)
    v4 = math.floor(v7 / 2.55 + 0.5)
    self.compactedPercent = v4
    v7 = streamReadUIntN(streamId, 8)
    v4 = math.floor(v7 / 2.55 + 0.5)
    self.fermentingPercent = v4
  end
end
function BunkerSilo:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    streamWriteUIntN(streamId, self.state, 3)
    streamWriteBool(streamId, self.isOpenedAtFront)
    streamWriteBool(streamId, self.isOpenedAtBack)
    streamWriteFloat32(streamId, self.fillLevel)
    streamWriteUIntN(streamId, 2.55 * self.compactedPercent, 8)
    streamWriteUIntN(streamId, 2.55 * self.fermentingPercent, 8)
  end
end
function BunkerSilo:readUpdateStream(streamId, timestamp, connection)
  local v5 = v5:superClass()
  v5.readUpdateStream(self, streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      v4 = streamReadUIntN(streamId, 3)
      if v4 ~= self.state then
        self:setState(v4, true)
      end
      v5 = streamReadFloat32(streamId)
      self.fillLevel = v5
      v5 = streamReadBool(streamId)
      self.isOpenedAtFront = v5
      v5 = streamReadBool(streamId)
      self.isOpenedAtBack = v5
      if self.state == BunkerSilo.STATE_FILL then
        local v8 = streamReadUIntN(streamId, 8)
        v5 = math.floor(v8 / 2.55 + 0.5)
        self.compactedPercent = v5
        return
      end
      if self.state ~= BunkerSilo.STATE_CLOSED then
        -- if v0.state ~= BunkerSilo.STATE_FERMENTED then goto L104 end
      end
      v8 = streamReadUIntN(streamId, 8)
      v5 = math.floor(v8 / 2.55 + 0.5)
      self.fermentingPercent = v5
    end
  end
end
function BunkerSilo:writeUpdateStream(streamId, connection, dirtyMask)
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v7 = bitAND(dirtyMask, self.bunkerSiloDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      streamWriteUIntN(streamId, self.state, 3)
      streamWriteFloat32(streamId, self.fillLevel)
      streamWriteBool(streamId, self.isOpenedAtFront)
      streamWriteBool(streamId, self.isOpenedAtBack)
      if self.state == BunkerSilo.STATE_FILL then
        streamWriteUIntN(streamId, 2.55 * self.compactedPercent, 8)
        return
      end
      if self.state ~= BunkerSilo.STATE_CLOSED then
        -- if v0.state ~= BunkerSilo.STATE_FERMENTED then goto L99 end
      end
      streamWriteUIntN(streamId, 2.55 * self.fermentingPercent, 8)
    end
  end
end
function BunkerSilo:loadFromXMLFile(xmlFile, key)
  local v3 = xmlFile:getValue(key .. "#state")
  if v3 ~= nil and 0 <= v3 and v3 < BunkerSilo.NUM_STATES then
    self:setState(v3)
  end
  local v4 = xmlFile:getValue(key .. "#fillLevel")
  if v4 ~= nil then
    self.fillLevel = v4
  end
  local v5 = xmlFile:getValue(key .. "#compactedFillLevel")
  if v5 ~= nil then
    local v6 = MathUtil.clamp(v5, 0, self.fillLevel)
    self.compactedFillLevel = v6
  end
  local v7 = math.min(self.compactedFillLevel, self.fillLevel)
  v6 = MathUtil.getFlooredPercent(v7, self.fillLevel)
  self.compactedPercent = v6
  v6 = xmlFile:getValue(key .. "#fermentingTime")
  if v6 ~= nil then
    self.fermentingPercent = v6 / BunkerSilo.MILLISECONDS_PER_DAY * g_currentMission.environment.daysPerPeriod
  end
  v7 = xmlFile:getValue(key .. "#openedAtFront", false)
  self.isOpenedAtFront = v7
  v7 = xmlFile:getValue(key .. "#openedAtBack", false)
  self.isOpenedAtBack = v7
  if self.isOpenedAtFront then
    local v8 = self:getBunkerAreaOffset(true, 0, self.outputFillType)
    self.bunkerSiloArea.offsetFront = v8
  else
    v8 = self:getBunkerAreaOffset(true, 0, self.fermentingFillType)
    self.bunkerSiloArea.offsetFront = v8
  end
  if self.isOpenedAtBack then
    v8 = self:getBunkerAreaOffset(false, 0, self.outputFillType)
    self.bunkerSiloArea.offsetBack = v8
  else
    v8 = self:getBunkerAreaOffset(false, 0, self.fermentingFillType)
    self.bunkerSiloArea.offsetBack = v8
  end
  if 0 < self.fillLevel then
    -- if v0.state ~= BunkerSilo.STATE_DRAIN then goto L353 end
    local v10 = math.sqrt((self.bunkerSiloArea.wx - self.bunkerSiloArea.sx) * (self.bunkerSiloArea.wx - self.bunkerSiloArea.sx) + (self.bunkerSiloArea.wz - self.bunkerSiloArea.sz) * (self.bunkerSiloArea.wz - self.bunkerSiloArea.sz))
    local v13 = math.sqrt((self.bunkerSiloArea.hx - self.bunkerSiloArea.sx) * (self.bunkerSiloArea.hx - self.bunkerSiloArea.sx) + (self.bunkerSiloArea.hz - self.bunkerSiloArea.sz) * (self.bunkerSiloArea.hz - self.bunkerSiloArea.sz))
    if 0.001 < v10 and 0.001 < v13 then
      local v14 = math.min(0.45, 0.9 / v10)
      local v15 = math.min(0.45, 0.9 / v13)
      local v16 = DensityMapHeightUtil.getFillLevelAtArea(self.fermentingFillType, self.bunkerSiloArea.sx + (self.bunkerSiloArea.wx - self.bunkerSiloArea.sx) * v14 + (self.bunkerSiloArea.hx - self.bunkerSiloArea.sx) * v15, self.bunkerSiloArea.sz + (self.bunkerSiloArea.wz - self.bunkerSiloArea.sz) * v14 + (self.bunkerSiloArea.hz - self.bunkerSiloArea.sz) * v15, self.bunkerSiloArea.wx - (self.bunkerSiloArea.wx - self.bunkerSiloArea.sx) * v14 + (self.bunkerSiloArea.hx - self.bunkerSiloArea.sx) * v15, self.bunkerSiloArea.wz - (self.bunkerSiloArea.wz - self.bunkerSiloArea.sz) * v14 + (self.bunkerSiloArea.hz - self.bunkerSiloArea.sz) * v15, self.bunkerSiloArea.hx + (self.bunkerSiloArea.wx - self.bunkerSiloArea.sx) * v14 - (self.bunkerSiloArea.hx - self.bunkerSiloArea.sx) * v15, self.bunkerSiloArea.hz + (self.bunkerSiloArea.wz - self.bunkerSiloArea.sz) * v14 - (self.bunkerSiloArea.hz - self.bunkerSiloArea.sz) * v15)
      local v17 = DensityMapHeightUtil.getFillLevelAtArea(self.outputFillType, self.bunkerSiloArea.sx + (self.bunkerSiloArea.wx - self.bunkerSiloArea.sx) * v14 + (self.bunkerSiloArea.hx - self.bunkerSiloArea.sx) * v15, self.bunkerSiloArea.sz + (self.bunkerSiloArea.wz - self.bunkerSiloArea.sz) * v14 + (self.bunkerSiloArea.hz - self.bunkerSiloArea.sz) * v15, self.bunkerSiloArea.wx - (self.bunkerSiloArea.wx - self.bunkerSiloArea.sx) * v14 + (self.bunkerSiloArea.hx - self.bunkerSiloArea.sx) * v15, self.bunkerSiloArea.wz - (self.bunkerSiloArea.wz - self.bunkerSiloArea.sz) * v14 + (self.bunkerSiloArea.hz - self.bunkerSiloArea.sz) * v15, self.bunkerSiloArea.hx + (self.bunkerSiloArea.wx - self.bunkerSiloArea.sx) * v14 - (self.bunkerSiloArea.hx - self.bunkerSiloArea.sx) * v15, self.bunkerSiloArea.hz + (self.bunkerSiloArea.wz - self.bunkerSiloArea.sz) * v14 - (self.bunkerSiloArea.hz - self.bunkerSiloArea.sz) * v15)
      if v16 + v17 < self.emptyThreshold * 0.5 then
        DensityMapHeightUtil.removeFromGroundByArea(self.bunkerSiloArea.sx, self.bunkerSiloArea.sz, self.bunkerSiloArea.wx, self.bunkerSiloArea.wz, self.bunkerSiloArea.hx, self.bunkerSiloArea.hz, self.fermentingFillType)
        DensityMapHeightUtil.removeFromGroundByArea(self.bunkerSiloArea.sx, self.bunkerSiloArea.sz, self.bunkerSiloArea.wx, self.bunkerSiloArea.wz, self.bunkerSiloArea.hx, self.bunkerSiloArea.hz, self.outputFillType)
        self:setState(BunkerSilo.STATE_FILL, false)
      end
    end
    DensityMapHeightUtil.changeFillTypeAtArea(v7.sx, v7.sz, v7.wx, v7.wz, v7.hx, v7.hz, self.inputFillType, self.outputFillType)
  elseif 0 < self.fillLevel then
    if self.state ~= BunkerSilo.STATE_CLOSED then
      -- if v0.state ~= BunkerSilo.STATE_FERMENTED then goto L396 end
    end
    DensityMapHeightUtil.changeFillTypeAtArea(self.bunkerSiloArea.sx, self.bunkerSiloArea.sz, self.bunkerSiloArea.wx, self.bunkerSiloArea.wz, self.bunkerSiloArea.hx, self.bunkerSiloArea.hz, self.inputFillType, self.fermentingFillType)
  else
    if self.state == BunkerSilo.STATE_FILL then
      local v8, v9, v10 = DensityMapHeightUtil.getFillLevelAtArea(self.fermentingFillType, self.bunkerSiloArea.sx, self.bunkerSiloArea.sz, self.bunkerSiloArea.wx, self.bunkerSiloArea.wz, self.bunkerSiloArea.hx, self.bunkerSiloArea.hz)
      if self.emptyThreshold < v8 and 0.5 * v10 < v9 then
        local v11, v12, v13 = DensityMapHeightUtil.getFillLevelAtArea(self.inputFillType, self.bunkerSiloArea.sx, self.bunkerSiloArea.sz, self.bunkerSiloArea.wx, self.bunkerSiloArea.wz, self.bunkerSiloArea.hx, self.bunkerSiloArea.hz)
        if v12 < 0.1 * v13 then
          self:setState(BunkerSilo.STATE_FERMENTED, false)
        end
      end
    end
  end
  return true
end
function BunkerSilo:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#state", self.state)
  xmlFile:setValue(key .. "#fillLevel", self.fillLevel)
  xmlFile:setValue(key .. "#compactedFillLevel", self.compactedFillLevel)
  xmlFile:setValue(key .. "#fermentingTime", self.fermentingPercent * BunkerSilo.MILLISECONDS_PER_DAY * g_currentMission.environment.daysPerPeriod)
  xmlFile:setValue(key .. "#openedAtFront", self.isOpenedAtFront)
  xmlFile:setValue(key .. "#openedAtBack", self.isOpenedAtBack)
end
function BunkerSilo:update(dt)
  local key = self:getCanInteract(true)
  if key then
    if self.state ~= BunkerSilo.STATE_CLOSED and self.state ~= BunkerSilo.STATE_FERMENTED then
      -- if v0.state ~= BunkerSilo.STATE_DRAIN then goto L33 end
    end
    local v4 = v4:getFillTypeByIndex(self.outputFillType)
    if v4 ~= nil then
    end
    if self.state == BunkerSilo.STATE_FILL then
      local v10 = v10:getText("info_fillLevel")
      local v9 = string.format(" %s: %d", v3, self.fillLevel)
      v5:addExtraPrintText(v10 .. v9)
      v10 = v10:getText("info_compacting")
      v9 = string.format(" %d%%", self.compactedPercent)
      v5:addExtraPrintText(v10 .. v9)
    else
      if self.state ~= BunkerSilo.STATE_CLOSED then
        -- if v0.state ~= BunkerSilo.STATE_FERMENTED then goto L134 end
      end
      v10 = v10:getText("info_fermenting")
      local v12 = math.ceil(self.fermentingPercent * 100)
      v9 = string.format(...)
      v5:addExtraPrintText(v10 .. v9)
      -- goto L162  (LOP_JUMP +28)
      if self.state == BunkerSilo.STATE_DRAIN then
        v10 = v10:getText("info_fillLevel")
        v9 = string.format(" %s: %d", v3, self.fillLevel)
        v5:addExtraPrintText(v10 .. v9)
      end
    end
  end
  if self.isServer and self.state == BunkerSilo.STATE_FILL then
    for v5, v6 in pairs(self.vehiclesInRange) do
      if not v6 then
        continue
      end
      local v7 = v5:getIsActive()
      if not v7 then
        continue
      end
      if not (0 < v5.lastMovedDistance) then
        continue
      end
      local v8 = v5:getTotalMass(false)
      if v5.getBunkerSiloCompacterScale ~= nil then
        local v11 = v5:getBunkerSiloCompacterScale()
      end
      if v5.getWheels ~= nil then
        v12 = v5:getWheels()
        if 0 < #v12 then
          for v19, v20 in ipairs(v12) do
            if v20.contact == Wheels.WHEEL_GROUND_HEIGHT_CONTACT then
            elseif not (v20.contact == Wheels.WHEEL_NO_CONTACT) then
              continue
            end
          end
          if 0 < v14 then
          else
          end
        end
      end
      if not (0 < v11) then
        continue
      end
      v12 = math.min(self.compactedFillLevel + v11, self.fillLevel)
      if not (v12 ~= self.compactedFillLevel) then
        continue
      end
      self:updateCompacting(v12)
    end
  end
  if g_currentMission ~= nil and g_currentMission.bunkerScore ~= nil and g_currentMission.bunkerScore < self.fillLevel then
    g_currentMission.bunkerScore = self.fillLevel
  end
  self:raiseActive()
end
function BunkerSilo:updateTick(dt)
  if self.isServer then
    self.updateTimer = self.updateTimer - dt
    if self.updateTimer <= 0 then
      local v5 = math.random()
      self.updateTimer = 200 + v5 * 100
      self:updateFillLevel()
      if self.fillLevel ~= self.fillLevel then
        self:updateCompacting(self.compactedFillLevel)
      end
    end
  end
  if not self.adjustedOpeningLength then
    self.adjustedOpeningLength = true
    v5 = DensityMapHeightUtil.getDefaultMaxRadius(self.outputFillType)
    local key = math.max(self.openingLength, v5 + 1)
    self.openingLength = key
  end
end
function BunkerSilo:updateCompacting(compactedFillLevel)
  self.compactedFillLevel = compactedFillLevel
  local v3 = math.min(self.compactedFillLevel, self.fillLevel)
  local key = MathUtil.getFlooredPercent(v3, self.fillLevel)
  self.compactedPercent = key
  self:raiseDirtyFlags(self.bunkerSiloDirtyFlag)
end
function BunkerSilo:updateFillLevel()
  if self.inputFillType ~= FillType.UNKNOWN then
    if self.state == BunkerSilo.STATE_FILL then
      local v4 = DensityMapHeightUtil.getFillLevelAtArea(self.inputFillType, self.bunkerSiloArea.inner.sx, self.bunkerSiloArea.inner.sz, self.bunkerSiloArea.inner.wx, self.bunkerSiloArea.inner.wz, self.bunkerSiloArea.inner.hx, self.bunkerSiloArea.inner.hz)
    elseif self.state == BunkerSilo.STATE_CLOSED then
      v4 = DensityMapHeightUtil.getFillLevelAtArea(self.fermentingFillType, self.bunkerSiloArea.inner.sx, self.bunkerSiloArea.inner.sz, self.bunkerSiloArea.inner.wx, self.bunkerSiloArea.inner.wz, self.bunkerSiloArea.inner.hx, self.bunkerSiloArea.inner.hz)
    else
      if self.state == BunkerSilo.STATE_FERMENTED then
        v4 = DensityMapHeightUtil.getFillLevelAtArea(self.fermentingFillType, self.bunkerSiloArea.inner.sx, self.bunkerSiloArea.inner.sz, self.bunkerSiloArea.inner.wx, self.bunkerSiloArea.inner.wz, self.bunkerSiloArea.inner.hx, self.bunkerSiloArea.inner.hz)
        local v5 = DensityMapHeightUtil.getFillLevelAtArea(self.outputFillType, self.bunkerSiloArea.inner.sx, self.bunkerSiloArea.inner.sz, self.bunkerSiloArea.inner.wx, self.bunkerSiloArea.inner.wz, self.bunkerSiloArea.inner.hx, self.bunkerSiloArea.inner.hz)
      elseif self.state == BunkerSilo.STATE_DRAIN then
        v4 = DensityMapHeightUtil.getFillLevelAtArea(self.fermentingFillType, self.bunkerSiloArea.inner.sx, self.bunkerSiloArea.inner.sz, self.bunkerSiloArea.inner.wx, self.bunkerSiloArea.inner.wz, self.bunkerSiloArea.inner.hx, self.bunkerSiloArea.inner.hz)
        v5 = DensityMapHeightUtil.getFillLevelAtArea(self.outputFillType, self.bunkerSiloArea.inner.sx, self.bunkerSiloArea.inner.sz, self.bunkerSiloArea.inner.wx, self.bunkerSiloArea.inner.wz, self.bunkerSiloArea.inner.hx, self.bunkerSiloArea.inner.hz)
        if v4 + v5 < self.emptyThreshold then
          DensityMapHeightUtil.removeFromGroundByArea(self.bunkerSiloArea.inner.sx, self.bunkerSiloArea.inner.sz, self.bunkerSiloArea.inner.wx, self.bunkerSiloArea.inner.wz, self.bunkerSiloArea.inner.hx, self.bunkerSiloArea.inner.hz, self.fermentingFillType)
          DensityMapHeightUtil.removeFromGroundByArea(self.bunkerSiloArea.inner.sx, self.bunkerSiloArea.inner.sz, self.bunkerSiloArea.inner.wx, self.bunkerSiloArea.inner.wz, self.bunkerSiloArea.inner.hx, self.bunkerSiloArea.inner.hz, self.outputFillType)
          self:setState(BunkerSilo.STATE_FILL, true)
        end
      end
    end
  end
  self.fillLevel = key
end
function BunkerSilo:setState(state, showNotification)
  if state ~= self.state then
    if state == BunkerSilo.STATE_FILL then
      self.fermentingPercent = 0
      self.compactedFillLevel = 0
      self.compactedPercent = 0
      self.isOpenedAtFront = false
      self.isOpenedAtBack = false
      self.bunkerSiloArea.offsetFront = 0
      self.bunkerSiloArea.offsetBack = 0
      if showNotification then
        local v5 = v5:getText("ingameNotification_bunkerSiloIsEmpty")
        self:showBunkerMessage(...)
      end
      -- if not v0.isServer then goto L233 end
      v3:removeFixedFillTypesArea(self.bunkerSiloArea)
      v3:setConvertingFillTypeAreas(self.bunkerSiloArea, self.acceptedFillTypes, self.inputFillType)
    elseif state == BunkerSilo.STATE_CLOSED then
      if self.isServer then
        local v4 = self:getBunkerAreaOffset(true, 0, self.inputFillType)
        v5 = self:getBunkerAreaOffset(false, 0, self.inputFillType)
        local v12 = DensityMapHeightUtil.changeFillTypeAtArea(self.bunkerSiloArea.sx + v4 * self.bunkerSiloArea.dhx_norm, self.bunkerSiloArea.sz + v4 * self.bunkerSiloArea.dhz_norm, self.bunkerSiloArea.sx + v4 * self.bunkerSiloArea.dhx_norm + self.bunkerSiloArea.dwx, self.bunkerSiloArea.sz + v4 * self.bunkerSiloArea.dhz_norm + self.bunkerSiloArea.dwz, self.bunkerSiloArea.sx + self.bunkerSiloArea.dhx - v5 * self.bunkerSiloArea.dhx_norm, self.bunkerSiloArea.sz + self.bunkerSiloArea.dhz - v5 * self.bunkerSiloArea.dhz_norm, self.inputFillType, self.fermentingFillType)
        v13:removeFixedFillTypesArea(self.bunkerSiloArea)
        v13:removeConvertingFillTypeAreas(self.bunkerSiloArea)
      end
      -- if not v2 then goto L233 end
      v5 = v5:getText("ingameNotification_bunkerSiloCovered")
      self:showBunkerMessage(...)
    else
      if state == BunkerSilo.STATE_FERMENTED then
        -- if not v2 then goto L233 end
        v5 = v5:getText("ingameNotification_bunkerSiloDoneFermenting")
        self:showBunkerMessage(...)
      elseif state == BunkerSilo.STATE_DRAIN then
        self.bunkerSiloArea.offsetFront = 0
        self.bunkerSiloArea.offsetBack = 0
        if showNotification then
          v5 = v5:getText("ingameNotification_bunkerSiloOpened")
          self:showBunkerMessage(...)
        end
        if self.isServer then
          v3:removeConvertingFillTypeAreas(self.bunkerSiloArea)
          {}[self.outputFillType] = true
          v4:setFixedFillTypesArea(self.bunkerSiloArea, {})
        end
      end
    end
    self.state = state
    if self.isServer then
      self:raiseDirtyFlags(self.bunkerSiloDirtyFlag)
    end
  end
end
function BunkerSilo:showBunkerMessage(msg)
  local v3 = self:getOwnerFarmId()
  if g_currentMission.player.farmId == v3 then
    showNotification:addIngameNotification(FSBaseMission.INGAME_NOTIFICATION_INFO, msg)
  end
end
function BunkerSilo:openSilo(px, py, pz)
  self:setState(BunkerSilo.STATE_DRAIN, true)
  local v5 = self:getBunkerAreaOffset(true, 0, self.fermentingFillType)
  self.bunkerSiloArea.offsetFront = v5
  v5 = self:getBunkerAreaOffset(false, 0, self.fermentingFillType)
  self.bunkerSiloArea.offsetBack = v5
  local openAtFront = self:getIsCloserToFront(px, py, pz)
  if openAtFront and not self.isOpenedAtFront then
    self:switchFillTypeAtOffset(true, self.bunkerSiloArea.offsetFront, self.openingLength)
    self.isOpenedAtFront = true
    self:raiseDirtyFlags(self.bunkerSiloDirtyFlag)
    return
  end
  if not self.isOpenedAtBack then
    self:switchFillTypeAtOffset(false, self.bunkerSiloArea.offsetBack, self.openingLength)
    self.isOpenedAtBack = true
    self:raiseDirtyFlags(self.bunkerSiloDirtyFlag)
  end
end
function BunkerSilo:getBunkerAreaOffset(updateAtFront, offset, fillType)
  local v7 = MathUtil.vector3Length(self.bunkerSiloArea.dhx, self.bunkerSiloArea.dhy, self.bunkerSiloArea.dhz)
  while true do
    if not (offset <= v7 - 1) then
      break
    end
    if not updateAtFront then
    end
    v19 = DensityMapHeightUtil.getFillLevelAtArea(fillType, v4.sx + v8 * v5, v4.sz + v8 * v6, v4.wx + v8 * v5, v4.wz + v8 * v6, v4.sx + (v8 + 1) * v5, v4.sz + (v8 + 1) * v6)
    if 0 < v19 then
      return offset
    end
  end
  return math.max(v7 - 1, 0)
end
function BunkerSilo:switchFillTypeAtOffset(switchAtFront, offset, length)
  if switchAtFront then
  else
  end
  DensityMapHeightUtil.changeFillTypeAtArea(v6, v7, v8, v9, v10, v11, v4, v5)
end
function BunkerSilo:getIsCloserToFront(ix, iy, iz)
  local v8 = MathUtil.vector3Length(self.bunkerSiloArea.sx + 0.5 * self.bunkerSiloArea.dwx + self.bunkerSiloArea.offsetFront * self.bunkerSiloArea.dhx_norm - ix, self.bunkerSiloArea.sy + 0.5 * self.bunkerSiloArea.dwy + self.bunkerSiloArea.offsetFront * self.bunkerSiloArea.dhy_norm - iy, self.bunkerSiloArea.sz + 0.5 * self.bunkerSiloArea.dwz + self.bunkerSiloArea.offsetFront * self.bunkerSiloArea.dhz_norm - iz)
  local v9 = MathUtil.vector3Length(self.bunkerSiloArea.sx + 0.5 * self.bunkerSiloArea.dwx + self.bunkerSiloArea.dhx - self.bunkerSiloArea.offsetBack * self.bunkerSiloArea.dhx_norm - ix, self.bunkerSiloArea.sy + 0.5 * self.bunkerSiloArea.dwy + self.bunkerSiloArea.dhy - self.bunkerSiloArea.offsetBack * self.bunkerSiloArea.dhy_norm - iy, self.bunkerSiloArea.sz + 0.5 * self.bunkerSiloArea.dwz + self.bunkerSiloArea.dhz - self.bunkerSiloArea.offsetBack * self.bunkerSiloArea.dhz_norm - iz)
  if v8 >= v9 then
  end
  return true
end
function BunkerSilo:getCanInteract(showInformationOnly)
  if showInformationOnly then
    if g_currentMission.controlPlayer and self.playerInRange then
      return true
    end
    -- if g_currentMission.controlPlayer then goto L44 end
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L44
    for v5 in pairs(self.vehiclesInRange) do
      local v7 = v5:getIsActiveForInput(true)
      if not v7 then
        continue
      end
      if not (v5 == g_currentMission.controlledVehicle) then
        continue
      end
      return true
    end
  elseif g_currentMission.controlPlayer and self.playerInRange then
    return true
  end
  return false
end
function BunkerSilo:getCanCloseSilo()
  if self.state == BunkerSilo.STATE_FILL and 0 < self.fillLevel and 100 > self.compactedPercent then
  end
  return showInformationOnly
end
function BunkerSilo:getCanOpenSilo()
  if self.state ~= BunkerSilo.STATE_FERMENTED and self.state ~= BunkerSilo.STATE_DRAIN then
    return false
  end
  local showInformationOnly, showNotification, v3 = self:getInteractionPosition()
  if showInformationOnly ~= nil then
    local v4 = self:getIsCloserToFront(showInformationOnly, showNotification, v3)
    if v4 and not self.isOpenedAtFront then
      return true
    end
    if not v4 and not self.isOpenedAtBack then
      return true
    end
  end
  return false
end
function BunkerSilo:clearSiloArea()
  local showInformationOnly, showNotification, v3 = getWorldTranslation(self.bunkerSiloArea.start)
  local v4, v5, v6 = getWorldTranslation(self.bunkerSiloArea.width)
  local v7, v8, v9 = getWorldTranslation(self.bunkerSiloArea.height)
  DensityMapHeightUtil.clearArea(showInformationOnly, v3, v4, v6, v7, v9)
end
function BunkerSilo:setWallVisibility(isLeftVisible, isRightVisible)
  if self.wallLeft ~= nil then
    local v3 = Utils.getNoNil(isLeftVisible, self.wallLeft.visible)
    if self.wallLeft.visible ~= v3 then
      self.wallLeft.visible = v3
      setVisibility(self.wallLeft.node, v3)
      if self.wallLeft.collision ~= nil then
        if v3 then
          -- if RigidBodyType.STATIC then goto L49 end
        end
        v3(v4, RigidBodyType.NONE)
      end
    end
  end
  if self.wallRight ~= nil then
    v3 = Utils.getNoNil(isRightVisible, self.wallRight.visible)
    if self.wallRight.visible ~= v3 then
      self.wallRight.visible = v3
      setVisibility(self.wallRight.node, v3)
      if self.wallRight.collision ~= nil then
        if v3 then
          -- if RigidBodyType.STATIC then goto L99 end
        end
        v3(v4, RigidBodyType.NONE)
      end
    end
  end
end
function BunkerSilo:onHourChanged()
  if self.state == BunkerSilo.STATE_CLOSED and self.isServer then
    local showInformationOnly = math.min(self.fermentingPercent + 0.041666666666666664 / g_currentMission.environment.daysPerPeriod, 1)
    self.fermentingPercent = showInformationOnly
    self:raiseDirtyFlags(self.bunkerSiloDirtyFlag)
    if 0.999 <= self.fermentingPercent then
      self:setState(BunkerSilo.STATE_FERMENTED, true)
    end
  end
end
function BunkerSilo:getInteractionPosition()
  if g_currentMission.controlPlayer and self.playerInRange then
    return getWorldTranslation(g_currentMission.player.rootNode)
  end
  if self.vehiclesInRange[g_currentMission.currentVehicle] ~= nil then
    showInformationOnly = getWorldTranslation(self.vehiclesInRange[g_currentMission.currentVehicle].components[1].node)
    return showInformationOnly
  end
  return nil
end
function BunkerSilo:interactionTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if not onEnter then
    -- if not v4 then goto L112 end
  end
  if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
    if onEnter then
      self.playerInRange = true
      v7:addActivatable(self.activatable)
      return
    end
    self.playerInRange = false
    -- cmp-jump LOP_JUMPXEQKN R7 aux=0x8000000b -> L112
    v7:removeActivatable(self.activatable)
    return
  end
  if g_currentMission.nodeToObject[otherShapeId] ~= nil then
    if onEnter then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L112
      self.vehiclesInRange[g_currentMission.nodeToObject[otherShapeId]] = true
      self.numVehiclesInRange = self.numVehiclesInRange + 1
      v8:addActivatable(self.activatable)
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L112
      g_currentMission.nodeToObject[otherShapeId]:setBunkerSiloInteractorCallback(BunkerSilo.onChangedFillLevelCallback, self)
      return
    end
    if self.vehiclesInRange[v7] then
      self.vehiclesInRange[v7] = nil
      self.numVehiclesInRange = self.numVehiclesInRange - 1
      if self.numVehiclesInRange == 0 and not self.playerInRange then
        v8:removeActivatable(self.activatable)
      end
      if v7.setBunkerSiloInteractorCallback ~= nil then
        v7:setBunkerSiloInteractorCallback(nil)
      end
    end
  end
end
function BunkerSilo:onChangedFillLevelCallback(vehicle, fillDelta, fillType, x, y, z)
  if 0 <= fillDelta then
    return
  end
  if x ~= nil and y ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L23
  end
  local v8, v9, v10 = getWorldTranslation(vehicle.components[1].node)
  v8 = self:getIsCloserToFront(v8, v9, v10)
  if v8 then
    -- if not v0.isOpenedAtFront then goto L131 end
    v10 = MathUtil.getProjectOnLineParameter(v8, v10, v7.sx, v7.sz, v7.dhx_norm, v7.dhz_norm)
    -- if v7.offsetFront - v0.openingLength >= v10 then goto L131 end
    local v11 = self:getBunkerAreaOffset(true, v7.offsetFront, self.fermentingFillType)
    local v13 = math.max(v10, v11)
    self:switchFillTypeAtOffset(true, v7.offsetFront, v13 + self.openingLength - v7.offsetFront)
    v7.offsetFront = v13 + self.openingLength
    return
  end
  if self.isOpenedAtBack then
    v10 = MathUtil.getProjectOnLineParameter(x, z, v7.hx, v7.hz, -v7.dhx_norm, -v7.dhz_norm)
    if v7.offsetBack - v9 < v10 then
      v11 = self:getBunkerAreaOffset(false, v7.offsetBack, self.fermentingFillType)
      v13 = math.max(v10, v11)
      self:switchFillTypeAtOffset(false, v7.offsetBack, v13 + v9 - v7.offsetBack)
      v7.offsetBack = v13 + v9
    end
  end
end
function BunkerSilo:registerXMLPaths(showInformationOnly)
  self:register(XMLValueType.NODE_INDEX, showInformationOnly .. ".area#startNode", "Area start node (placed in the middle of the walls)")
  self:register(XMLValueType.NODE_INDEX, showInformationOnly .. ".area#widthNode", "Area width node (placed in the middle of the walls)")
  self:register(XMLValueType.NODE_INDEX, showInformationOnly .. ".area#heightNode", "Area height node (placed in the middle of the walls)")
  self:register(XMLValueType.NODE_INDEX, showInformationOnly .. ".innerArea#startNode", "Inner area start node (Used to detect fill level - placed 25cm from inner walls)")
  self:register(XMLValueType.NODE_INDEX, showInformationOnly .. ".innerArea#widthNode", "Inner area width node (Used to detect fill level - placed 25cm from inner walls)")
  self:register(XMLValueType.NODE_INDEX, showInformationOnly .. ".innerArea#heightNode", "Inner area height node (Used to detect fill level - placed 25cm from inner walls)")
  self:register(XMLValueType.NODE_INDEX, showInformationOnly .. ".wallLeft#node", "Left wall node")
  self:register(XMLValueType.NODE_INDEX, showInformationOnly .. ".wallLeft#collision", "Left wall collision")
  self:register(XMLValueType.NODE_INDEX, showInformationOnly .. ".wallRight#node", "Right wall node")
  self:register(XMLValueType.NODE_INDEX, showInformationOnly .. ".wallRight#collision", "Right wall collision")
  self:register(XMLValueType.NODE_INDEX, showInformationOnly .. ".interactionTrigger#node", "Interaction trigger node")
  self:register(XMLValueType.STRING, showInformationOnly .. "#acceptedFillTypes", "Accepted fill types", "chaff grass_windrow dryGrass_windrow")
  self:register(XMLValueType.STRING, showInformationOnly .. "#inputFillType", "Input fill type", "chaff")
  self:register(XMLValueType.STRING, showInformationOnly .. "#outputFillType", "Output fill type", "silage")
  self:register(XMLValueType.FLOAT, showInformationOnly .. "#distanceToCompactedFillLevel", "Distance to drive on bunker silo for full compaction", 100)
  self:register(XMLValueType.FLOAT, showInformationOnly .. "#openingLength", "Opening length", 5)
end
function BunkerSilo:registerSavegameXMLPaths(showInformationOnly)
  self:register(XMLValueType.INT, showInformationOnly .. "#state", "Current silo state (FILL = 0, CLOSED = 1, FERMENTED = 2, DRAIN = 3)", 0)
  self:register(XMLValueType.FLOAT, showInformationOnly .. "#fillLevel", "Current fill level")
  self:register(XMLValueType.FLOAT, showInformationOnly .. "#compactedFillLevel", "Compacted fill level")
  self:register(XMLValueType.FLOAT, showInformationOnly .. "#fermentingTime", "Fermenting time")
  self:register(XMLValueType.BOOL, showInformationOnly .. "#openedAtFront", "Is opened at front", false)
  self:register(XMLValueType.BOOL, showInformationOnly .. "#openedAtBack", "Is opened at back", false)
end
BunkerSiloActivatable = {}
local showInformationOnly = Class(BunkerSiloActivatable)
function BunkerSiloActivatable.new(bunkerSilo)
  setmetatable({}, u0)
  return {bunkerSilo = bunkerSilo, activateText = "unknown"}
end
function BunkerSiloActivatable:getIsActivatable()
  local showInformationOnly = showInformationOnly:getCanInteract()
  if showInformationOnly then
    showInformationOnly = showInformationOnly:getCanCloseSilo()
    if not showInformationOnly then
      showInformationOnly = showInformationOnly:getCanOpenSilo()
      -- if not v1 then goto L23 end
    end
    self:updateActivateText()
    return true
  end
  return false
end
function BunkerSiloActivatable:getHasAccess(farmId)
  local v5 = v5:getOwnerFarmId()
  return showNotification:canFarmAccessOtherId(...)
end
function BunkerSiloActivatable:run()
  local showInformationOnly = showInformationOnly:getCanCloseSilo()
  if showInformationOnly then
    if g_server ~= nil then
      showInformationOnly:setState(BunkerSilo.STATE_CLOSED, true)
      -- goto L77  (LOP_JUMP +56)
    end
    showInformationOnly = showInformationOnly:getServerConnection()
    local v3 = BunkerSiloCloseEvent.new(self.bunkerSilo)
    showInformationOnly:sendEvent(...)
  else
    showInformationOnly = showInformationOnly:getCanOpenSilo()
    if showInformationOnly then
      local showInformationOnly, showNotification, v3 = showInformationOnly:getInteractionPosition()
      if showInformationOnly ~= nil then
        if g_server ~= nil then
          v4:openSilo(showInformationOnly, showNotification, v3)
        else
          local v4 = v4:getServerConnection()
          local v6 = BunkerSiloOpenEvent.new(self.bunkerSilo, showInformationOnly, showNotification, v3)
          v4:sendEvent(...)
        end
      end
    end
  end
  self:updateActivateText()
end
function BunkerSiloActivatable:updateActivateText()
  self.activateText = "unknown"
  if self.bunkerSilo.state == BunkerSilo.STATE_FILL then
    local showInformationOnly = showInformationOnly:getText("action_blanketSilo")
    self.activateText = showInformationOnly
    return
  end
  if self.bunkerSilo.state == BunkerSilo.STATE_FERMENTED then
    showInformationOnly = showInformationOnly:getText("action_openSilo")
    self.activateText = showInformationOnly
    return
  end
  if self.bunkerSilo.state == BunkerSilo.STATE_DRAIN then
    if self.bunkerSilo.isOpenedAtFront then
      -- if v0.bunkerSilo.isOpenedAtBack then goto L69 end
    end
    showInformationOnly = showInformationOnly:getText("action_openSilo")
    self.activateText = showInformationOnly
  end
end
