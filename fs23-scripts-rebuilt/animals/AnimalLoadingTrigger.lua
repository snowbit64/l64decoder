-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalLoadingTrigger = {}
local AnimalLoadingTrigger_mt = Class(AnimalLoadingTrigger)
InitStaticObjectClass(AnimalLoadingTrigger, "AnimalLoadingTrigger", ObjectIds.OBJECT_ANIMAL_LOADING_TRIGGER)
function AnimalLoadingTrigger:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Trigger node of animal loading trigger")
  self:register(XMLValueType.BOOL, v1 .. "#isDealer", "Is dealer or not", false)
  self:register(XMLValueType.STRING, v1 .. "#animalTypes", "List of supported animal types (only for dealer)")
  self:register(XMLValueType.STRING, v1 .. "#title", "Title to show in the UI", "ui_farm")
end
function AnimalLoadingTrigger.onCreate(v0, v1)
  if g_server == nil then
  end
  if g_client == nil then
  end
  local v2 = v2(v3, true)
  if v2 ~= nil then
    local v3 = v2:load(v1)
    if v3 then
      v3:addNonUpdateable(v2)
      return
    end
    v2:delete()
  end
end
function AnimalLoadingTrigger.new(isServer, isClient)
  local v2 = Object.new(isServer, isClient, u0)
  v2.customEnvironment = g_currentMission.loadingMapModName
  v2.isDealer = false
  v2.triggerNode = nil
  local v3 = v3:getText("ui_farm")
  v2.title = v3
  v2.animals = nil
  v3 = AnimalLoadingTriggerActivatable.new(v2)
  v2.activatable = v3
  v2.isPlayerInRange = false
  v2.isEnabled = false
  v2.loadingVehicle = nil
  v2.activatedTarget = nil
  return v2
end
function AnimalLoadingTrigger:loadFromXML(v1, v2, v3, v4)
  local v5 = v1:getValue(v2 .. "#node", nil, v3, v4)
  self.triggerNode = v5
  if self.triggerNode == nil then
    Logging.xmlWarning(v1, "Missing trigger node for animalLoadingTrigger!")
    return false
  end
  self.husbandry = nil
  v5 = v1:getValue(v2 .. "#isDealer", false)
  self.isDealer = v5
  if self.isDealer then
    v5 = v1:getValue(v2 .. "#animalTypes")
    if v5 ~= nil then
      local v6 = v5:split(" ")
      for v10, v11 in pairs(v6) do
        local v12 = v12:getTypeIndexByName(v11)
        if v12 ~= nil then
          if self.animalTypes == nil then
            self.animalTypes = {}
          end
          table.insert(self.animalTypes, v12)
        else
          Logging.xmlWarning(v1, "Invalid animal type '%s' for animalLoadingTrigger!", v11)
        end
      end
    end
  end
  addTrigger(self.triggerNode, "triggerCallback", self)
  v7 = v1:getValue(v2 .. "#title", "ui_farm")
  v5 = v5:convertText(v7, self.customEnvironment)
  self.title = v5
  self.isEnabled = true
  return true
end
function AnimalLoadingTrigger:load(node, husbandry)
  self.husbandry = husbandry
  local v4 = getUserAttribute(node, "isDealer")
  local v3 = Utils.getNoNil(v4, false)
  self.isDealer = v3
  if self.isDealer then
    v3 = getUserAttribute(node, "animalTypes")
    if v3 ~= nil then
      v4 = v3:split(" ")
      for v8, v9 in pairs(v4) do
        local v10 = v10:getTypeIndexByName(v9)
        if v10 ~= nil then
          if self.animalTypes == nil then
            self.animalTypes = {}
          end
          table.insert(self.animalTypes, v10)
        else
          local v14 = getName(node)
          Logging.warning(...)
        end
      end
    end
  end
  self.triggerNode = node
  addTrigger(self.triggerNode, "triggerCallback", self)
  v6 = getUserAttribute(node, "title")
  v5 = Utils.getNoNil(v6, "ui_farm")
  v3 = v3:getText(v5, self.customEnvironment)
  self.title = v3
  self.isEnabled = true
  return true
end
function AnimalLoadingTrigger:delete()
  v1:removeActivatable(self.activatable)
  if self.triggerNode ~= nil then
    removeTrigger(self.triggerNode)
    self.triggerNode = nil
  end
  self.husbandry = nil
end
function AnimalLoadingTrigger:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if self.isEnabled then
    if not onEnter then
      -- if not v4 then goto L96 end
    end
    if g_currentMission.nodeToObject[otherId] ~= nil and g_currentMission.nodeToObject[otherId].getSupportsAnimalType ~= nil then
      if onEnter then
        self:setLoadingTrailer(g_currentMission.nodeToObject[otherId])
        -- if not Platform.gameplay.autoActivateTrigger then goto L96 end
        local v7 = v7:getIsActivatable()
        -- if not v7 then goto L96 end
        v7:run()
        if g_currentMission.nodeToObject[otherId].rootVehicle.brakeToStop ~= nil then
          g_currentMission.nodeToObject[otherId].rootVehicle:brakeToStop()
        end
        return
        return
      end
      -- if not v4 then goto L96 end
      if v6 == self.loadingVehicle then
        self:setLoadingTrailer(nil)
      end
      -- if v6 ~= v0.activatedTarget then goto L96 end
      v7:onVehicleLeftTrigger()
      return
    end
    if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
      if onEnter then
        self.isPlayerInRange = true
        -- if not Platform.gameplay.autoActivateTrigger then goto L93 end
        v7 = v7:getIsActivatable()
        -- if not v7 then goto L93 end
        v7:run()
      else
        self.isPlayerInRange = false
      end
      self:updateActivatableObject()
    end
  end
end
function AnimalLoadingTrigger:updateActivatableObject()
  if self.loadingVehicle == nil then
    -- if not v0.isPlayerInRange then goto L15 end
  end
  v1:addActivatable(self.activatable)
  return
  if self.loadingVehicle == nil and not self.isPlayerInRange then
    v1:removeActivatable(self.activatable)
  end
end
function AnimalLoadingTrigger:setLoadingTrailer(loadingVehicle)
  if self.loadingVehicle ~= nil and self.loadingVehicle.setLoadingTrigger ~= nil then
    v2:setLoadingTrigger(nil)
  end
  self.loadingVehicle = loadingVehicle
  if self.loadingVehicle ~= nil and self.loadingVehicle.setLoadingTrigger ~= nil then
    v2:setLoadingTrigger(self)
  end
  self:updateActivatableObject()
end
function AnimalLoadingTrigger:showAnimalScreen(husbandry)
  if husbandry == nil and self.loadingVehicle == nil then
    local v3 = v3:getText("shop_messageNoHusbandries")
    InfoDialog.show(...)
    return
  end
  if husbandry ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L29
    v3 = AnimalScreenDealerFarm.new(husbandry)
  elseif husbandry == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L42
    v3 = AnimalScreenDealerTrailer.new(self.loadingVehicle)
  else
    v3 = AnimalScreenTrailerFarm.new(husbandry, self.loadingVehicle)
  end
  if v2 ~= nil then
    v2:init()
    v3:setController(v2)
    v3:showGui("AnimalScreen")
  end
end
function AnimalLoadingTrigger:onSelectedHusbandry(husbandry)
  if husbandry ~= nil then
    self:showAnimalScreen(husbandry)
    return
  end
  self:updateActivatableObject()
end
function AnimalLoadingTrigger:getAnimals()
  return self.animalTypes
end
function AnimalLoadingTrigger:openAnimalMenu()
  if self.isDealer and self.loadingVehicle == nil then
    local v2 = v2:getPlaceablesByFarm()
    if 1 < #v2 then
      local v6 = v6:getText("category_animalpens")
      AnimalDialog.show(self.onSelectedHusbandry, self, v6, v2)
      return
    end
    if #v2 == 1 then
    end
  end
  self:showAnimalScreen(husbandry)
  self.activatedTarget = self.loadingVehicle
end
AnimalLoadingTriggerActivatable = {}
local husbandry = Class(AnimalLoadingTriggerActivatable)
function AnimalLoadingTriggerActivatable:new()
  local husbandry = setmetatable({}, u0)
  husbandry.owner = self
  local v2 = v2:getText("animals_openAnimalScreen", self.customEnvironment)
  husbandry.activateText = v2
  return husbandry
end
function AnimalLoadingTriggerActivatable:getIsActivatable()
  if not self.owner.isEnabled then
    return false
  end
  if g_gui.currentGui ~= nil then
    return false
  end
  local v2 = v2:getHasPlayerPermission("tradeAnimals")
  if not v2 then
    return false
  end
  if husbandry.husbandry ~= nil then
    local v3 = v3:getOwnerFarmId()
    local v4 = v4:getFarmId()
    if v3 ~= v4 then
    end
  end
  if not v2 then
    return false
  end
  if husbandry.loadingVehicle ~= nil then
  end
  if not husbandry.isPlayerInRange and v3 ~= g_currentMission.controlledVehicle then
  end
  return v4
end
function AnimalLoadingTriggerActivatable:run()
  local husbandry = husbandry:getIsRunning()
  if husbandry then
    local v4 = v4:getText("tour_text_feature_deactivated")
    husbandry:showInfoDialog({text = v4})
    return
  end
  husbandry:openAnimalMenu()
end
function AnimalLoadingTriggerActivatable:getDistance(x, y, z)
  if self.owner.triggerNode ~= nil then
    local v4, v5, v6 = getWorldTranslation(self.owner.triggerNode)
    return MathUtil.vector3Length(x - v4, y - v5, z - v6)
  end
  return math.huge
end
