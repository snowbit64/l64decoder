-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableChargingStation = {}
function PlaceableChargingStation.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(PlaceableBuyingStation, v0)
end
function PlaceableChargingStation.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "getIsCharging", PlaceableChargingStation.getIsCharging)
  SpecializationUtil.registerFunction(placeableType, "getChargeState", PlaceableChargingStation.getChargeState)
end
function PlaceableChargingStation.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableChargingStation)
  SpecializationUtil.registerEventListener(placeableType, "onUpdate", PlaceableChargingStation)
end
function PlaceableChargingStation:registerXMLPaths(v1)
  self:setXMLSpecializationType("BuyingStation")
  BuyingStation.registerXMLPaths(self, v1 .. ".buyingStation")
  self:register(XMLValueType.FLOAT, v1 .. ".chargingStation.chargeIndicator#intensity", "Light intensity", 20)
  self:register(XMLValueType.FLOAT, v1 .. ".chargingStation.chargeIndicator#blinkSpeed", "Blinking speed", 5)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".chargingStation.chargeIndicator#node", "Charge indicator node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".chargingStation.chargeIndicator#light", "Charge indicator light node")
  self:register(XMLValueType.VECTOR_4, v1 .. ".chargingStation.chargeIndicator#colorFull", "Color while battery is charged", "0 1 0 1")
  self:register(XMLValueType.VECTOR_4, v1 .. ".chargingStation.chargeIndicator#colorEmpty", "Color while battery is empty", "1 1 0 1")
  self:register(XMLValueType.FLOAT, v1 .. ".chargingStation#interactionRadius", "While player is in this range the battery state is displayed", 5)
  SoundManager.registerSampleXMLPaths(self, v1 .. ".chargingStation.sounds", "fill")
  self:setXMLSpecializationType()
end
function PlaceableChargingStation:onLoad(savegame)
  local v3 = v3:getValue("placeable.chargingStation.chargeIndicator#intensity", 20)
  self.spec_chargingStation.chargeIndicatorIntensity = v3
  v3 = v3:getValue("placeable.chargingStation.chargeIndicator#blinkSpeed", 5)
  self.spec_chargingStation.chargeIndicatorBlinkSpeed = v3
  v3 = v3:getValue("placeable.chargingStation.chargeIndicator#node", nil, self.components, self.i3dMappings)
  self.spec_chargingStation.chargeIndicatorNode = v3
  if self.spec_chargingStation.chargeIndicatorNode ~= nil then
    setShaderParameter(self.spec_chargingStation.chargeIndicatorNode, "lightControl", self.spec_chargingStation.chargeIndicatorIntensity, 0, 0, 0, false)
    setShaderParameter(self.spec_chargingStation.chargeIndicatorNode, "emitColor", 1, 1, 0, 0, false)
  end
  v3 = v3:getValue("placeable.chargingStation.chargeIndicator#light", nil, self.components, self.i3dMappings)
  v2.chargeIndicatorLight = v3
  if v2.chargeIndicatorLight then
    setLightColor(v2.chargeIndicatorLight, 0, 0, 0)
  end
  v3 = v3:getValue("placeable.chargingStation.chargeIndicator#colorFull", "0 1 0 1", true)
  v2.chargeIndicatorColorFull = v3
  v3 = v3:getValue("placeable.chargingStation.chargeIndicator#colorEmpty", "1 1 0 1", true)
  v2.chargeIndicatorColorEmpty = v3
  v2.chargeIndicatorLightColor = v2.chargeIndicatorColorFull
  v3 = v3:getValue("placeable.chargingStation#interactionRadius", 5)
  v2.interactionRadius = v3
  v2.loadTrigger = nil
  v3 = self:getBuyingStation()
  v2.buyingStation = v3
  if v2.buyingStation ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 136, target 182)
    v2.loadTrigger = v2.buyingStation.loadTriggers[1]
    local v7 = v7:loadSampleFromXML(self.xmlFile, "placeable.chargingStation.sounds", "fill", self.baseDirectory, self.components, 0, AudioGroup.ENVIRONMENT, self.i3dMappings, nil)
    v2.fillSample = v7
    if v2.fillSample ~= nil and v2.buyingStation.loadTriggers[1].samples.load == nil then
      v2.buyingStation.loadTriggers[1].samples.load = v2.fillSample
    end
    -- TODO: structure LOP_FORNLOOP (pc 181, target 137)
  end
end
function PlaceableChargingStation:getIsCharging()
  if self.spec_chargingStation.loadTrigger ~= nil then
    return self.spec_chargingStation.loadTrigger.isLoading
  end
  return false
end
function PlaceableChargingStation:getChargeState()
  if self.spec_chargingStation.loadTrigger ~= nil then
    local v2 = next(self.spec_chargingStation.loadTrigger.fillableObjects)
    if v2 ~= nil and self.spec_chargingStation.loadTrigger.fillableObjects[v2].object.getConsumerFillUnitIndex ~= nil then
      local v4 = self.spec_chargingStation.loadTrigger.fillableObjects[v2].object:getConsumerFillUnitIndex(FillType.ELECTRICCHARGE)
      if v4 ~= nil then
        local v5 = self.spec_chargingStation.loadTrigger.fillableObjects[v2].object:getFillUnitFillLevel(v4)
        local v6 = self.spec_chargingStation.loadTrigger.fillableObjects[v2].object:getFillUnitCapacity(v4)
        return v5
      end
    end
  end
  return 0, 1
end
function PlaceableChargingStation:onUpdate(dt)
  if self.spec_chargingStation.loadTrigger ~= nil then
    local v4 = next(self.spec_chargingStation.loadTrigger.fillableObjects)
    if v4 == nil then
    end
    if v2.chargeIndicatorNode ~= nil then
      if true then
        local v5, v6 = self:getChargeState()
        if 0.95 < v5 / v6 then
        end
        setShaderParameter(v2.chargeIndicatorNode, "colorScale", v4[1], v4[2], v4[3], v4[4], false)
        v2.chargeIndicatorLightColor = v4
      end
      if v2.loadTrigger.isLoading then
        -- if v2.chargeIndicatorBlinkSpeed then goto L55 end
      end
      setShaderParameter(v2.chargeIndicatorNode, "blinkSpeed", 0, 0, 0, 0, false)
      if v3 then
        -- if v2.chargeIndicatorIntensity then goto L76 end
      end
      v5(v6, v7, 0, 0, 0, 0, false)
      if v2.chargeIndicatorLight ~= nil then
        if v3 then
          local v6, v7, v8, v9 = getShaderParameter(v2.chargeIndicatorNode, "blinkOffset")
          local v17 = getShaderTimeSec()
          local v12 = math.cos(v4 * v8 * (v17 - v7) + 2 * math.pi * v6)
          local v10 = MathUtil.clamp(v12 + 0.2, 0, 1)
        end
        setLightColor(v2.chargeIndicatorLight, v2.chargeIndicatorLightColor[1] * v5, v2.chargeIndicatorLightColor[2] * v5, v2.chargeIndicatorLightColor[3] * v5)
      end
    end
    if v2.loadTrigger.isLoading then
      if g_currentMission.controlPlayer then
        -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L159
        v5 = calcDistanceFrom(g_currentMission.player.rootNode, self.rootNode)
        -- if v5 >= v2.interactionRadius then goto L180 end
      elseif g_currentMission.controlledVehicle ~= nil then
        for v8, v9 in pairs(v2.loadTrigger.fillableObjects) do
          if not (v9.object == g_currentMission.controlledVehicle) then
            continue
          end
        end
      end
      if v4 then
        v5, v6 = self:getChargeState()
        if 1 <= (v6 - v5) / v2.loadTrigger.fillLitersPerMS * 1000 then
          v10 = math.floor((v6 - v5) / v2.loadTrigger.fillLitersPerMS * 1000 / 60)
          v12 = v12:getText("info_chargeTime")
          local v11 = string.format(v12, v10, (v6 - v5) / v2.loadTrigger.fillLitersPerMS * 1000 - v10 * 60, v5 / v6 * 100)
          v2.chargingInfoText = v11
          v11:addExtraPrintText(self.chargingInfoText)
        end
      end
    end
    if v3 then
      self:raiseActive()
    end
  end
end
