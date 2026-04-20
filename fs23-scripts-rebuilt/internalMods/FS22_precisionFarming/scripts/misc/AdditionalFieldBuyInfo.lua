-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AdditionalFieldBuyInfo = {MOD_NAME = g_currentModName}
local AdditionalFieldBuyInfo_mt = Class(AdditionalFieldBuyInfo)
function AdditionalFieldBuyInfo.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.statistics = {}
  v2.statisticsByFarmland = {}
  v2.mapFrame = nil
  v2.selectedFarmlandId = nil
  v2.showTotal = false
  v2.selectedField = 0
  v2.selectedFieldSize = 0
  v2.soilDistribution = {0, 0, 0, 0}
  v2.soilDistributionTarget = {0, 0, 0, 0}
  v2.yieldPotential = 0
  v2.yieldPotentialTarget = 0
  v2.doInterpolation = false
  v2.pfModule = pfModule
  return v2
end
function AdditionalFieldBuyInfo:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  local v7 = v7:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  self.isColorBlindMode = v7 or false
  v6:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_COLORBLIND_MODE], self.setColorBlindMode, self)
  return true
end
function AdditionalFieldBuyInfo.loadFromItemsXML(v0, v1, v2)
end
function AdditionalFieldBuyInfo.saveToXMLFile(v0, v1, v2, v3)
end
function AdditionalFieldBuyInfo.delete(v0)
  v1:unsubscribeAll(v0)
end
function AdditionalFieldBuyInfo:readInfoFromStream(farmlandId, streamId, connection)
  local v4 = streamReadBool(streamId)
  if v4 then
    v4 = streamReadUIntN(streamId, 9)
    self.selectedField = v4
    v4 = streamReadFloat32(streamId)
    self.selectedFieldSize = v4
    v4:setVisible(true)
    -- TODO: structure LOP_FORNPREP (pc 31, target 46)
    self.soilDistribution[1] = 0
    local v9 = streamReadUIntN(streamId, 8)
    self.soilDistributionTarget[1] = v9 / 255
    -- TODO: structure LOP_FORNLOOP (pc 45, target 32)
    local v6 = streamReadUIntN(streamId, 8)
    self.yieldPotentialTarget = v6 / 255 * 1.25
    self.yieldPotential = 1
    self.doInterpolation = true
    self:updateUIValues()
    return
  end
  v4:setVisible(false)
end
function AdditionalFieldBuyInfo:writeInfoToStream(farmlandId, streamId, connection)
  local v5, v6 = self:getFarmlandFieldInfo(farmlandId)
  if 0 < v6 and g_farmlandManager.farmlands[farmlandId].soilDistribution == nil then
  end
  local v8 = streamWriteBool(streamId, v7)
  if v8 then
    streamWriteUIntN(streamId, v5, 9)
    streamWriteFloat32(streamId, v6)
    -- TODO: structure LOP_FORNPREP (pc 39, target 50)
    streamWriteUIntN(streamId, v4.soilDistribution[1] * 255, 8)
    -- TODO: structure LOP_FORNLOOP (pc 49, target 40)
    streamWriteUIntN(streamId, v4.yieldPotential / 1.25 * 255, 8)
  end
end
function AdditionalFieldBuyInfo:setColorBlindMode(isActive)
  if isActive ~= self.isColorBlindMode then
    self.isColorBlindMode = isActive
    self:updateSoilBars()
  end
end
function AdditionalFieldBuyInfo:update(dt)
  if self.doInterpolation then
    local dir = MathUtil.sign(self.yieldPotentialTarget - self.yieldPotential)
    if dir == 1 then
      -- if math.min then goto L18 end
    end
    local v4 = math.max(self.yieldPotential + dt * 0.00025 * dir, self.yieldPotentialTarget)
    self.yieldPotential = v4
    -- TODO: structure LOP_FORNPREP (pc 35, target 79)
    local v8 = MathUtil.sign(self.soilDistributionTarget[1] - self.soilDistribution[1])
    if v8 == 1 then
      -- if math.min then goto L54 end
    end
    local v9 = math.max(self.soilDistribution[v7] + dt * 0.001 * dir, self.soilDistributionTarget[v7])
    self.soilDistribution[v7] = v9
    if self.soilDistribution[v7] ~= self.soilDistributionTarget[v7] then
    end
    -- TODO: structure LOP_FORNLOOP (pc 78, target 36)
    self:updateUIValues()
    if self.yieldPotential == self.yieldPotentialTarget and v4 then
      self.doInterpolation = false
    end
  end
end
function AdditionalFieldBuyInfo:setMapFrame(mapFrame)
  self.mapFrame = mapFrame
  if not self.maxBarSize then
  end
  self.maxBarSize = v2
  v2:setVisible(false)
end
function AdditionalFieldBuyInfo:updateSoilBars()
  if self.pfModule.soilMap ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 15, target 49)
    v6:setText(self.pfModule.soilMap.soilTypes[1].name)
    if self.isColorBlindMode then
      -- if v0.pfModule.soilMap.soilTypes[1].colorBlind then goto L41 end
    end
    local v9 = unpack(v5.color)
    v6:setImageColor(...)
    -- TODO: structure LOP_FORNLOOP (pc 48, target 16)
  end
end
function AdditionalFieldBuyInfo:updateUIValues()
  self:updateSoilBars()
  if self.selectedField ~= 0 then
    local v4 = v4:getText("ui_economicAnalysisHeaderField", AdditionalFieldBuyInfo.MOD_NAME)
    local v3 = string.format(v4, self.selectedField, self.selectedFieldSize)
  else
    v4 = v4:getText("ui_economicAnalysisHeaderAdditionalField", AdditionalFieldBuyInfo.MOD_NAME)
    v3 = string.format(v4, self.selectedFieldSize)
  end
  v3:setText(v2)
  -- TODO: structure LOP_FORNPREP (pc 54, target 117)
  if self.soilDistribution[1] == 0 then
  end
  local v10 = string.format(v7, self.soilDistribution[v5] * 100)
  v8:setText(...)
  v8:setSize(self.maxBarSize * self.soilDistribution[v5])
  v8:setPosition(v1.soilPercentageBar[v5].position[1] + v1.soilPercentageBar[v5].size[1] + v6)
  -- TODO: structure LOP_FORNLOOP (pc 116, target 55)
  if 1 < self.yieldPotential then
    v3:setPosition(v1.yieldPercentageBarBase.position[1] + v1.yieldPercentageBarBase.size[1])
    v3:setSize(v1.yieldPercentageBarBase.size[1] * (self.yieldPotential - 1))
    v3:setSize(0)
  elseif self.yieldPotential < 1 then
    local v5 = math.abs(self.yieldPotential - 1)
    v4:setPosition(v1.yieldPercentageBarBase.position[1] + v1.yieldPercentageBarBase.size[1] - v1.yieldPercentageBarBase.size[1] * v5)
    v4:setSize(v1.yieldPercentageBarBase.size[1] * v5)
    v4:setSize(0)
  else
    v3:setSize(0)
    v3:setSize(0)
  end
  v5 = string.format("~%d%%", self.yieldPotential * 100)
  v3:setText(...)
  local v6 = math.min(v1.yieldPercentageBarBase.position[1] + v1.yieldPercentageBarBase.size[1] * self.yieldPotential - v1.yieldPercentageText.size[1] * 0.5, v1.yieldPercentageBarBase.position[1] + v1.yieldPercentageBarBase.size[1] * 1.25 - v1.yieldPercentageText.size[1])
  v4:setPosition(...)
end
function AdditionalFieldBuyInfo:onFarmlandSelectionChanged(selectedFarmland)
  if self.mapFrame ~= nil then
    if selectedFarmland ~= nil then
      if g_server ~= nil then
        local v2, v3 = self:getFarmlandFieldInfo(selectedFarmland.id)
        if 0.01 <= v3 then
          self.selectedField = v2
          self.selectedFieldSize = v3
          v4:setVisible(true)
          if selectedFarmland.soilDistribution ~= nil then
            -- TODO: structure LOP_FORNPREP (pc 39, target 51)
            self.soilDistribution[1] = 0
            self.soilDistributionTarget[1] = selectedFarmland.soilDistribution[1]
            -- TODO: structure LOP_FORNLOOP (pc 50, target 40)
            self.yieldPotentialTarget = selectedFarmland.yieldPotential
            self.yieldPotential = 1
            self.doInterpolation = true
          end
          self:updateUIValues()
          return
        end
        v4:setVisible(false)
        return
      end
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L104
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L104
      v2 = v2:getServerConnection()
      local v4 = RequestFieldBuyInfoEvent.new(selectedFarmland.id)
      v2:sendEvent(...)
      return
    end
    v2:setVisible(false)
  end
end
function AdditionalFieldBuyInfo.getFarmlandFieldInfo(v0, v1)
  if g_farmlandManager.farmlands[v1] ~= nil then
  end
  local v5 = v5:getFields()
  if v5 ~= nil then
    for v9, v10 in pairs(v5) do
      if not (v10.farmland ~= nil) then
        continue
      end
      if not (v10.farmland.id == v1) then
        continue
      end
      return v10.fieldId, v3
    end
  end
  return v2, v3
end
function AdditionalFieldBuyInfo:updateFieldSoilDistributionData()
  if self.pfModule.soilMap ~= nil and self.pfModule.soilMap.bitVectorMap ~= nil then
    local v4, v5 = getBitVectorMapSize(g_farmlandManager.localMap)
    local v6, v7 = getBitVectorMapSize(self.pfModule.soilMap.bitVectorMap)
    -- TODO: structure LOP_FORNPREP (pc 27, target 140)
    for v14 = 0, v7 - 1 do
      local v18 = getDensityAtWorldPos(g_currentMission.terrainDetailId, v11 / (v6 - 1) * g_currentMission.terrainSize - g_currentMission.terrainSize * 0.5, 0, v14 / (v7 - 1) * g_currentMission.terrainSize - g_currentMission.terrainSize * 0.5)
      if v18 == 0 then
      end
      if true then
        v18 = getBitVectorMapPoint(v2.localMap, v11 * v8, v14 * v8, 0, v2.numberOfBits)
        local v20 = getBitVectorMapPoint(v3, v11, v14, 0, v1.soilMap.numChannels)
        local v19 = bitAND(v20, 3)
        if 0 < v18 and v2.farmlands[v18] ~= nil then
          if v2.farmlands[v18].totalFieldArea == nil then
            v2.farmlands[v18].totalFieldArea = 0
          end
          v20.totalFieldArea = v20.totalFieldArea + 1
          if v20.soilDistribution == nil then
            v20.soilDistribution = {}
            -- TODO: structure LOP_FORNPREP (pc 123, target 129)
            v20.soilDistribution[1] = 0
            -- TODO: structure LOP_FORNLOOP (pc 128, target 124)
          end
          v20.soilDistribution[v19 + 1] = v20.soilDistribution[v19 + 1] + 1
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 138, target 32)
    end
    for v14, v15 in pairs(v2.farmlands) do
      v15:updatePrice()
      if not (v15.soilDistribution ~= nil) then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 161, target 167)
      -- TODO: structure LOP_FORNLOOP (pc 166, target 162)
      if 0 < 0 + v15.soilDistribution[1] then
        -- TODO: structure LOP_FORNPREP (pc 176, target 208)
        local v23 = math.floor(v15.soilDistribution[1] / (0 + v15.soilDistribution[1]) * 100)
        v15.soilDistribution[1] = v23 / 100
        local v22 = v22:getYieldPotentialBySoilTypeIndex(1)
        self.soilDistribution[1] = 0
        -- TODO: structure LOP_FORNLOOP (pc 207, target 177)
        v18 = MathUtil.clamp(0 + v22 * v15.soilDistribution[1], 0, 1.25)
        v15.yieldPotential = v18
      end
      v15.totalFieldArea = v15.totalFieldArea * g_currentMission.terrainSize / v6 * g_currentMission.terrainSize / v6 / 10000
    end
    Logging.devInfo("Map Overall Yield Potential: %.3f", v9 / v10)
  end
end
function AdditionalFieldBuyInfo.overwriteGameFunctions(v0, v1)
  v1:overwriteGameFunction(FarmlandManager, "loadFarmlandData", function(v0, v1, v2)
    local v3 = v0(v1, v2)
    if not v3 then
      return false
    end
    if g_currentMission.missionInfo.isValid then
      v3:updateFieldSoilDistributionData()
    else
      u0.delayedFieldSoilDistributionUpdate = true
    end
    return true
  end)
  v1:overwriteGameFunction(FieldManager, "setFieldPartitionStatus", function(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
    v0(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
    v2.pa_fieldInitialized = true
    if u0.delayedFieldSoilDistributionUpdate then
      for v17, v18 in pairs(v1.fields) do
        local v19 = v18:getIsAIActive()
        if not v19 then
          continue
        end
        if not v18.fieldMissionAllowed then
          continue
        end
        if not not v18.farmland.isOwned then
          continue
        end
        if not not v18.pa_fieldInitialized then
          continue
        end
        break
      end
      if v13 then
        u0.delayedFieldSoilDistributionUpdate = false
        v14:updateFieldSoilDistributionData()
      end
    end
  end)
  v1:overwriteGameFunction(Farmland, "updatePrice", function(v0, v1)
    v0(v1)
    if v1.yieldPotential ~= nil then
      v1.price = v1.price * v1.yieldPotential
    end
  end)
end
