-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHusbandryStraw = {}
function PlaceableHusbandryStraw.prerequisitesPresent(v0)
  return true
end
function PlaceableHusbandryStraw.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "updateStrawPlane", PlaceableHusbandryStraw.updateStrawPlane)
end
function PlaceableHusbandryStraw.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateOutput", PlaceableHusbandryStraw.updateOutput)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateProduction", PlaceableHusbandryStraw.updateProduction)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getConditionInfos", PlaceableHusbandryStraw.getConditionInfos)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableHusbandryStraw.updateInfo)
end
function PlaceableHusbandryStraw.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHusbandryStraw)
  SpecializationUtil.registerEventListener(placeableType, "onPostFinalizePlacement", PlaceableHusbandryStraw)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableHusbandryStraw)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableHusbandryStraw)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableHusbandryStraw)
  SpecializationUtil.registerEventListener(placeableType, "onHusbandryAnimalsUpdate", PlaceableHusbandryStraw)
  SpecializationUtil.registerEventListener(placeableType, "onHusbandryFillLevelChanged", PlaceableHusbandryStraw)
end
function PlaceableHusbandryStraw:registerXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  FillPlane.registerXMLPaths(self, v1 .. ".husbandry.straw" .. ".strawPlane")
  self:register(XMLValueType.FLOAT, v1 .. ".husbandry.straw" .. ".manure#factor", "Factor to transform straw to manure", 1)
  self:register(XMLValueType.BOOL, v1 .. ".husbandry.straw" .. ".manure#active", "Enable manure production", true)
  self:setXMLSpecializationType()
end
function PlaceableHusbandryStraw:onLoad(savegame)
  local v3 = v3:getValue("placeable.husbandry.straw.manure#factor", 1)
  self.spec_husbandryStraw.manureFactor = v3
  v3 = v3:getValue("placeable.husbandry.straw.manure#active", true)
  self.spec_husbandryStraw.isManureActive = v3
  v3 = FillPlane.new()
  self.spec_husbandryStraw.strawPlane = v3
  v3 = v3:load(self.components, self.xmlFile, "placeable.husbandry.straw.strawPlane", self.i3dMappings)
  if v3 then
    v3:setState(0)
  else
    v3:delete()
    self.spec_husbandryStraw.strawPlane = nil
  end
  v2.inputFillType = FillType.STRAW
  v2.outputFillType = FillType.MANURE
  v2.inputLitersPerHour = 0
  v2.outputLitersPerHour = 0
  local v4 = v4:getText("fillType_straw")
  v2.info = {title = v4, text = ""}
end
function PlaceableHusbandryStraw:onPostFinalizePlacement()
  self:updateStrawPlane()
end
function PlaceableHusbandryStraw:onDelete()
  if self.spec_husbandryStraw.strawPlane ~= nil then
    v2:delete()
    self.spec_husbandryStraw.strawPlane = nil
  end
end
function PlaceableHusbandryStraw:onFinalizePlacement()
  local v2 = self:getHusbandryIsFillTypeSupported(self.spec_husbandryStraw.inputFillType)
  if not v2 then
    Logging.warning("Missing filltype 'straw' in husbandry storage!")
  end
  if self.isManureActive then
    v2 = self:getHusbandryIsFillTypeSupported(v1.outputFillType)
    if not v2 then
      Logging.warning("Missing filltype 'manure' in husbandry storage!")
    end
  end
end
function PlaceableHusbandryStraw:onReadStream(streamId, connection)
  self:updateStrawPlane()
end
function PlaceableHusbandryStraw:updateStrawPlane()
  if self.spec_husbandryStraw.strawPlane ~= nil then
    local v2 = self:getHusbandryCapacity(self.spec_husbandryStraw.inputFillType, nil)
    local v3 = self:getHusbandryFillLevel(self.spec_husbandryStraw.inputFillType, nil)
    if 0 < v2 then
    end
    v5:setState(v4)
  end
end
function PlaceableHusbandryStraw:updateOutput(superFunc, foodFactor, productionFactor, globalProductionFactor)
  if self.isServer and 0 < self.spec_husbandryStraw.inputLitersPerHour then
    local v10 = self:getOwnerFarmId()
    local v8 = self:removeHusbandryFillLevel(v10, self.spec_husbandryStraw.inputLitersPerHour * g_currentMission.environment.timeAdjustment, self.spec_husbandryStraw.inputFillType)
    if 0 < self.spec_husbandryStraw.outputLitersPerHour and 0 < self.spec_husbandryStraw.inputLitersPerHour * g_currentMission.environment.timeAdjustment - v8 and 0 < foodFactor * self.spec_husbandryStraw.outputLitersPerHour * (self.spec_husbandryStraw.inputLitersPerHour * g_currentMission.environment.timeAdjustment - v8) / self.spec_husbandryStraw.inputLitersPerHour * g_currentMission.environment.timeAdjustment * g_currentMission.environment.timeAdjustment then
      local v11 = self:getOwnerFarmId()
      self:addHusbandryFillLevelFromTool(v11, foodFactor * self.spec_husbandryStraw.outputLitersPerHour * (self.spec_husbandryStraw.inputLitersPerHour * g_currentMission.environment.timeAdjustment - v8) / self.spec_husbandryStraw.inputLitersPerHour * g_currentMission.environment.timeAdjustment * g_currentMission.environment.timeAdjustment, self.spec_husbandryStraw.outputFillType, nil, nil, nil)
    end
    self:updateStrawPlane()
  end
  superFunc(self, foodFactor, productionFactor, globalProductionFactor)
end
function PlaceableHusbandryStraw:updateProduction(superFunc, foodFactor)
  local factor = superFunc(self, foodFactor)
  if self.isServer then
    local v5 = self:getHusbandryFillLevel(self.spec_husbandryStraw.inputFillType)
    if 0 < v5 then
      local v6 = self:getHusbandryFreeCapacity(self.spec_husbandryStraw.outputFillType)
      -- if v6 > 0 then goto L28 end
      return factor * 0.75
    end
  end
  return factor
end
function PlaceableHusbandryStraw:onHusbandryAnimalsUpdate(clusters)
  self.spec_husbandryStraw.inputLitersPerHour = 0
  self.spec_husbandryStraw.outputLitersPerHour = 0
  for v6, v7 in ipairs(clusters) do
    local v8 = v8:getSubTypeByIndex(v7.subTypeIndex)
    if not (v8 ~= nil) then
      continue
    end
    if v8.input.straw ~= nil then
      local v10 = v7:getAge()
      local v11 = v8.input.straw:get(v10)
      local v13 = v7:getNumAnimals()
      v2.inputLitersPerHour = v2.inputLitersPerHour + v11 * v13 / 24
    end
    if not (v8.output.manure ~= nil) then
      continue
    end
    v11 = v7:getAge()
    local v12 = v8.output.manure:get(v11)
    local v14 = v7:getNumAnimals()
    v2.outputLitersPerHour = v2.outputLitersPerHour + v12 * v14 / 24
  end
end
function PlaceableHusbandryStraw:onHusbandryFillLevelChanged(fillTypeIndex, delta)
  if fillTypeIndex == self.spec_husbandryStraw.inputFillType then
    self:updateStrawPlane()
  end
end
function PlaceableHusbandryStraw:getConditionInfos(superFunc)
  local infos = superFunc(self)
  local v5 = v5:getFillTypeByIndex(self.spec_husbandryStraw.inputFillType)
  local v6 = self:getHusbandryFillLevel(self.spec_husbandryStraw.inputFillType)
  v6 = self:getHusbandryCapacity(self.spec_husbandryStraw.inputFillType)
  if 0 < v6 then
  end
  local v8 = MathUtil.clamp(v7, 0, 1)
  v4.ratio = v8
  v4.invertedBar = false
  table.insert(infos, v4)
  return infos
end
function PlaceableHusbandryStraw:updateInfo(superFunc, infoTable)
  superFunc(self, infoTable)
  local v4 = self:getHusbandryFillLevel(self.spec_husbandryStraw.inputFillType)
  local v6 = string.format("%d l", v4)
  self.spec_husbandryStraw.info.text = v6
  table.insert(infoTable, self.spec_husbandryStraw.info)
end
