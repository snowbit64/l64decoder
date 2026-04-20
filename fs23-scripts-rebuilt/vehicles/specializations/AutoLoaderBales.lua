-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AutoLoaderBales = {}
function AutoLoaderBales.prerequisitesPresent(v0)
  return true
end
function AutoLoaderBales.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("AutoLoaderBales")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.autoLoaderBales.trigger#node", "Bale pickup trigger node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.autoLoaderBales.baleTypes.baleType(?)#fillTypes", "List of supported fill types (if empty, all fill types are allowed)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoaderBales.baleTypes.baleType(?)#diameter", "Bale diameter", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoaderBales.baleTypes.baleType(?)#width", "Bale width", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoaderBales.baleTypes.baleType(?)#height", "Bale height", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoaderBales.baleTypes.baleType(?)#length", "Bale length", 0)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.autoLoaderBales.baleTypes.baleType(?).spawnPlace#node", "Node to spawn the bale")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.autoLoaderBales.baleTypes.baleType(?).spawnPlace#numBales", "Number of bales that can be loaded", 1)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.autoLoaderBales.baleTypes.baleType(?).spawnPlace#offsetDirection", "Defines the axis in which the additional bales are moved", "0 1 0")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.autoLoaderBales.baleTypes.baleType(?).spawnPlace#mountBale", "Defines if the bale is mounted or just moved to the position of the spawn node", true)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Bale.registerSavegameXMLPaths(Vehicle.xmlSchemaSavegame, "vehicles.vehicle(?).autoLoaderBales.bale(?)")
end
function AutoLoaderBales.registerFunctions(v0)
  SpecializationUtil.registerFunction(v0, "autoLoaderBalesTriggerCallback", AutoLoaderBales.autoLoaderBalesTriggerCallback)
  SpecializationUtil.registerFunction(v0, "getAutoLoadBaleTypeFromBale", AutoLoaderBales.getAutoLoadBaleTypeFromBale)
  SpecializationUtil.registerFunction(v0, "doAutoLoadBale", AutoLoaderBales.doAutoLoadBale)
  SpecializationUtil.registerFunction(v0, "getIsBaleAutoLoadable", AutoLoaderBales.getIsBaleAutoLoadable)
end
function AutoLoaderBales.registerOverwrittenFunctions(v0)
end
function AutoLoaderBales.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", AutoLoaderBales)
  SpecializationUtil.registerEventListener(v0, "onLoadFinished", AutoLoaderBales)
  SpecializationUtil.registerEventListener(v0, "onDelete", AutoLoaderBales)
  SpecializationUtil.registerEventListener(v0, "onUpdate", AutoLoaderBales)
end
function AutoLoaderBales:onLoad(v1)
  self.spec_autoLoaderBales.balesInTrigger = {}
  self.spec_autoLoaderBales.balePickupDelay = 0
  self.spec_autoLoaderBales.mountedBales = {}
  self.spec_autoLoaderBales.numMountedBales = 0
  self.spec_autoLoaderBales.loadedBaleType = nil
  if self.isServer then
    local v3 = v3:getValue("vehicle.autoLoaderBales.trigger#node", nil, self.components, self.i3dMappings)
    self.spec_autoLoaderBales.triggerId = v3
    if self.spec_autoLoaderBales.triggerId ~= nil then
      addTrigger(self.spec_autoLoaderBales.triggerId, "autoLoaderBalesTriggerCallback", self)
    end
    v2.baleTypes = {}
    v3:iterate("vehicle.autoLoaderBales.baleTypes.baleType", function(self, v1)
      local v3 = v3:getValue(v1 .. ".spawnPlace#node", nil, u0.components, u0.i3dMappings)
      if {spawnNode = v3}.spawnNode ~= nil then
        v3 = v3:getValue(v1 .. ".spawnPlace#numBales", 1)
        v3 = v3:getValue(v1 .. ".spawnPlace#offsetDirection", "0 1 0", true)
        v3 = v3:getValue(v1 .. ".spawnPlace#mountBale", true)
        local v4 = v4:getValue(v1 .. "#diameter", 0)
        v3 = MathUtil.round(v4, 2)
        v4 = v4:getValue(v1 .. "#width", 0)
        v3 = MathUtil.round(v4, 2)
        v4 = v4:getValue(v1 .. "#height", 0)
        v3 = MathUtil.round(v4, 2)
        v4 = v4:getValue(v1 .. "#length", 0)
        v3 = MathUtil.round(v4, 2)
        v3 = v3:getValue(v1 .. "#fillTypes")
        local v11 = v11:getFilename()
        v4 = v4:getFillTypesByNames(v3, "Warning: '" .. v11 .. "' has invalid fillType '%s'.")
        if {spawnNode = v3, numBales = v3, offsetDirection = v3, mountBale = v3, diameter = v3, width = v3, height = v3, length = v3, fillTypes = v4}.diameter ~= 0 then
          -- cmp-jump LOP_JUMPXEQKN R4 aux=0x80000020 -> L172
        end
        if v2.width ~= 0 and v2.height ~= 0 and v2.length ~= 0 then
          table.insert(u1.baleTypes, v2)
          return
        end
        Logging.xmlWarning(u0.xmlFile, "Incomplete bale size defintion in '%s'", v1)
        return
      end
      Logging.xmlWarning(u0.xmlFile, "Missing spawn place node in '%s'", v1)
    end)
  end
end
function AutoLoaderBales.onLoadFinished(v0, v1)
  if v1 ~= nil and not v1.resetVehicles then
    v2:iterate(v1.key .. ".autoLoaderBales.bale", function(v0, v1)
      Bale.loadBaleAttributesFromXMLFile({}, u0.xmlFile, v1, u0.resetVehicles)
      local v3 = Bale.new(u1.isServer, u1.isClient)
      local v4 = v3:loadFromConfigXML({}.xmlFilename, 0, 0, 0, 0, 0, 0)
      if v4 then
        v3:applyBaleAttributes({})
        v4 = v4:getAutoLoadBaleTypeFromBale(v3)
        if v4 ~= nil then
          v5:doAutoLoadBale(v4, v3)
          return
        end
        v3:delete()
      end
    end)
  end
end
function AutoLoaderBales:onDelete()
  if self.spec_autoLoaderBales.triggerId ~= nil then
    removeTrigger(self.spec_autoLoaderBales.triggerId)
  end
  if v1.mountedBales ~= nil then
    for v5, v6 in pairs(v1.mountedBales) do
      v5:removeDeleteListener(self, AutoLoaderBales.onDeleteAutoLoaderBalesObject)
      v5:unmountKinematic()
      v1.mountedBales[v5] = nil
    end
  end
end
function AutoLoaderBales:saveToXMLFile(v1, v2, v3)
  for v9, v10 in pairs(self.spec_autoLoaderBales.mountedBales) do
    local v11 = string.format("%s.bale(%d)", v2, v5)
    v9:saveToXMLFile(v1, v11)
  end
end
function AutoLoaderBales:onUpdate(v1, v2, v3, v4)
  local v6 = math.max(self.spec_autoLoaderBales.balePickupDelay - 1, 0)
  self.spec_autoLoaderBales.balePickupDelay = v6
  if self.spec_autoLoaderBales.balePickupDelay == 0 then
    for v12, v13 in pairs(self.spec_autoLoaderBales.balesInTrigger) do
      if not (0 < v13) then
        continue
      end
      local v14 = self:getIsBaleAutoLoadable(v12)
      if not v14 then
        continue
      end
      v14 = self:getAutoLoadBaleTypeFromBale(v12)
      if not (v14 ~= nil) then
        continue
      end
      if not (v5.numMountedBales < v14.numBales) then
        continue
      end
      local v15, v16, v17 = getWorldTranslation(v12.nodeId)
      if not (v6 < v16) then
        continue
      end
    end
    if v7 ~= nil then
      self:doAutoLoadBale(v8, v7)
      v5.balesInTrigger[v7] = nil
      v5.balePickupDelay = 10
    end
  end
end
function AutoLoaderBales:onDeleteAutoLoaderBalesObject(v1)
  if self.spec_autoLoaderBales.mountedBales[v1] ~= nil then
    self.spec_autoLoaderBales.mountedBales[v1] = nil
    self.spec_autoLoaderBales.numMountedBales = self.spec_autoLoaderBales.numMountedBales - 1
  end
  v2.balesInTrigger[v1] = nil
  local v3 = next(v2.mountedBales)
  if v3 == nil then
    v2.loadedBaleType = nil
  end
end
function AutoLoaderBales:onBaleDeleted(v1)
  self.spec_autoLoaderBales.balesInTrigger[v1] = nil
end
function AutoLoaderBales:autoLoaderBalesTriggerCallback(v1, v2, v3, v4, v5, v6)
  if v2 == 0 then
    return
  end
  local v7 = v7:getNodeObject(v2)
  if v7 == nil then
    return
  end
  local v8 = v7:isa(Bale)
  if v8 then
    local v10 = self:getActiveFarm()
    v8 = v8:canFarmAccess(v10, v7)
    if v8 then
      v8 = v7:getAllowPickup()
      -- if v8 then goto L33 end
    end
  end
  return
  if v3 then
    self.spec_autoLoaderBales.balesInTrigger[v7] = (self.spec_autoLoaderBales.balesInTrigger[v7] or 0) + 1
    -- cmp-jump LOP_JUMPXEQKN R9 aux=0x8000000e -> L84
    v7:addDeleteListener(self, AutoLoaderBales.onBaleDeleted)
    return
  end
  v8.balesInTrigger[v7] = (v8.balesInTrigger[v7] or 0) - 1
  if v8.balesInTrigger[v7] <= 0 then
    v8.balesInTrigger[v7] = nil
    v7:removeDeleteListener(self, AutoLoaderBales.onBaleDeleted)
  end
end
function AutoLoaderBales:getAutoLoadBaleTypeFromBale(v1)
  local v3 = v1:getFillType()
  -- TODO: structure LOP_FORNPREP (pc 10, target 58)
  if self.spec_autoLoaderBales.loadedBaleType ~= nil then
    -- if v0.spec_autoLoaderBales.baleTypes[1] ~= v0.spec_autoLoaderBales.loadedBaleType then goto L57 end
  end
  if #v7.fillTypes ~= 0 then
  end
  -- TODO: structure LOP_FORNPREP (pc 34, target 43)
  if v7.fillTypes[1] == v3 then
  else
    -- TODO: structure LOP_FORNLOOP (pc 42, target 35)
  end
  if v8 then
    local v9 = v1:getBaleMatchesSize(v7.diameter, v7.width, v7.height, v7.length)
    if v9 then
      return v7
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 57, target 11)
  return nil
end
function AutoLoaderBales:doAutoLoadBale(v1, v2)
  if v1.mountBale then
    if v2.isRoundbale then
    else
    end
    v2:mountKinematic(self, v1.spawnNode, v4, v5, v6, 0, 0, 0)
    v3.mountedBales[v2] = true
    v2:addDeleteListener(self, AutoLoaderBales.onDeleteAutoLoaderBalesObject)
    v3.loadedBaleType = v1
    v3.numMountedBales = v3.numMountedBales + 1
    return
  end
  removeFromPhysics(v2.nodeId)
  local v6 = getWorldTranslation(v1.spawnNode)
  setTranslation(...)
  v6 = getWorldRotation(v1.spawnNode)
  setWorldRotation(...)
  addToPhysics(v2.nodeId)
  local v5 = self:getParentComponent(v1.spawnNode)
  local v4, v5, v6 = getLinearVelocity(...)
  setLinearVelocity(v2.nodeId, v4, v5, v6)
end
function AutoLoaderBales.getIsBaleAutoLoadable(v0, v1)
  if v1.mountObject ~= nil then
    return false
  end
  return true
end
