-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHusbandryMilk = {ROBOT_LOADING_FIX_ENABLED = true}
source("dataS/scripts/animals/husbandry/objects/MilkingRobot.lua")
function PlaceableHusbandryMilk.prerequisitesPresent(specializations)
  return SpecializationUtil.hasSpecialization(PlaceableHusbandry, specializations)
end
function PlaceableHusbandryMilk.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "onMilkingRobotLoaded", PlaceableHusbandryMilk.onMilkingRobotLoaded)
end
function PlaceableHusbandryMilk.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateOutput", PlaceableHusbandryMilk.updateOutput)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateProduction", PlaceableHusbandryMilk.updateProduction)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableHusbandryMilk.updateInfo)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getConditionInfos", PlaceableHusbandryMilk.getConditionInfos)
end
function PlaceableHusbandryMilk.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHusbandryMilk)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableHusbandryMilk)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableHusbandryMilk)
  SpecializationUtil.registerEventListener(placeableType, "onHusbandryAnimalsUpdate", PlaceableHusbandryMilk)
end
function PlaceableHusbandryMilk:registerXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.milk" .. ".milkingRobots.milkingRobot(?)#linkNode", "Milkingrobot link node")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.milk" .. ".milkingRobots.milkingRobot(?)#class", "Milkingrobot class name")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.milk" .. ".milkingRobots.milkingRobot(?)#filename", "Milkingrobot config file")
  self:setXMLSpecializationType()
end
function PlaceableHusbandryMilk:onLoad(savegame)
  self.spec_husbandryMilk.litersPerHour = 0
  self.spec_husbandryMilk.fillType = FillType.MILK
  local v4 = v4:getText("fillType_milk")
  self.spec_husbandryMilk.info = {title = v4, text = ""}
  self.spec_husbandryMilk.milkingRobots = {}
  self.spec_husbandryMilk.husbandry = nil
  v3:iterate("placeable.husbandry.milk.milkingRobots.milkingRobot", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#filename", nil)
    local v2 = Utils.getFilename(v3, u0.baseDirectory)
    if v2 == nil then
      Logging.xmlWarning(u0.xmlFile, "Milkingrobot filename missing for '%s'", savegame)
      return
    end
    v3 = v3:getValue(savegame .. "#class", "")
    local v4 = ClassUtil.getClassObject(v3)
    if v4 == nil then
      Logging.xmlWarning(u0.xmlFile, "Milkingrobot class '%s' not defined for '%s'", v3, savegame)
      return
    end
    local v5 = v5:getValue(savegame .. "#linkNode", nil, u0.components, u0.i3dMappings)
    if v5 == nil then
      Logging.xmlWarning(u0.xmlFile, "Milkingrobot linkNode not defined for '%s'", savegame)
      return
    end
    local v7 = v7:createLoadingTask(u0)
    v7 = v4.new(u0, u0.baseDirectory)
    local v8 = v7:load(v5, v2, u0.onMilkingRobotLoaded, u0, {loadingTask = v7})
    if v8 then
      table.insert(u1.milkingRobots, v7)
      return
    end
    v8:finishLoadingTask(v6.loadingTask)
    v7:delete()
  end)
end
function PlaceableHusbandryMilk:onMilkingRobotLoaded(robot, args)
  self:finishLoadingTask(args.loadingTask)
end
function PlaceableHusbandryMilk:onDelete()
  if self.spec_husbandryMilk.milkingRobots ~= nil then
    for v5, v6 in ipairs(self.spec_husbandryMilk.milkingRobots) do
      v6:delete()
    end
    v1.milkingRobots = {}
  end
end
function PlaceableHusbandryMilk:onFinalizePlacement()
  local v2 = self:getHusbandryIsFillTypeSupported(self.spec_husbandryMilk.fillType)
  if not v2 then
    Logging.warning("Missing filltype 'milk' in husbandry storage!")
  end
  for v5, v6 in ipairs(v1.milkingRobots) do
    v6:finalizePlacement()
  end
end
function PlaceableHusbandryMilk:updateOutput(superFunc, foodFactor, productionFactor, globalProductionFactor)
  if self.isServer and 0 < self.spec_husbandryMilk.litersPerHour then
    local v9 = self:getOwnerFarmId()
    self:addHusbandryFillLevelFromTool(v9, productionFactor * globalProductionFactor * self.spec_husbandryMilk.litersPerHour * g_currentMission.environment.timeAdjustment, self.spec_husbandryMilk.fillType, nil, nil, nil)
  end
  superFunc(self, foodFactor, productionFactor, globalProductionFactor)
end
function PlaceableHusbandryMilk:updateProduction(superFunc, foodFactor)
  local factor = superFunc(self, foodFactor)
  local v5 = self:getHusbandryFreeCapacity(self.spec_husbandryMilk.fillType)
  if v5 <= 0 then
  end
  return factor
end
function PlaceableHusbandryMilk:onHusbandryAnimalsUpdate(clusters)
  self.spec_husbandryMilk.litersPerHour = 0
  for v6, v7 in ipairs(clusters) do
    local v8 = v8:getSubTypeByIndex(v7.subTypeIndex)
    if not (v8 ~= nil) then
      continue
    end
    if not (v8.output.milk ~= nil) then
      continue
    end
    local v10 = v7:getAge()
    local v11 = v8.output.milk:get(v10)
    local v13 = v7:getNumAnimals()
    v2.litersPerHour = v2.litersPerHour + v11 * v13 / 24
  end
end
function PlaceableHusbandryMilk:updateInfo(superFunc, infoTable)
  superFunc(self, infoTable)
  local v4 = self:getHusbandryFillLevel(self.spec_husbandryMilk.fillType)
  local v6 = string.format("%d l", v4)
  self.spec_husbandryMilk.info.text = v6
  table.insert(infoTable, self.spec_husbandryMilk.info)
end
function PlaceableHusbandryMilk:getConditionInfos(superFunc)
  local infos = superFunc(self)
  local v5 = v5:getFillTypeByIndex(self.spec_husbandryMilk.fillType)
  local v6 = self:getHusbandryFillLevel(self.spec_husbandryMilk.fillType)
  v6 = self:getHusbandryCapacity(self.spec_husbandryMilk.fillType)
  if 0 < v6 then
  end
  local v8 = MathUtil.clamp(v7, 0, 1)
  v4.ratio = v8
  v4.invertedBar = true
  table.insert(infos, v4)
  return infos
end
