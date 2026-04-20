-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ProtectedBundleVehicle = {}
function ProtectedBundleVehicle.prerequisitesPresent(v0)
  return true
end
function ProtectedBundleVehicle.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("ProtectedBundleVehicle")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.protectedBundleVehicle#isBundleRoot", "Vehicle acts are bundle root vehicle (the only vehicle to be selectable, shown in overview, sellable, resetable)", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.protectedBundleVehicle#isBundleChild", "Vehicle acts as bundle child vehicle (can not be selected, not shown in map overview, reseted and sold with attacher vehicle)", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.protectedBundleVehicle#bundleFilename", "Path to bundle xml file (required for reset of the vehicle to spawn the bundle instead of the single vehicle)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function ProtectedBundleVehicle.registerOverwrittenFunctions(v0)
  SpecializationUtil.registerOverwrittenFunction(v0, "getReloadXML", ProtectedBundleVehicle.getReloadXML)
end
function ProtectedBundleVehicle.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", ProtectedBundleVehicle)
  SpecializationUtil.registerEventListener(v0, "onPostDetach", ProtectedBundleVehicle)
end
function ProtectedBundleVehicle:onLoad(v1)
  local v3 = v3:getValue("vehicle.protectedBundleVehicle#isBundleRoot", false)
  self.spec_protectedBundleVehicle.isBundleRoot = v3
  v3 = v3:getValue("vehicle.protectedBundleVehicle#isBundleChild", false)
  self.spec_protectedBundleVehicle.isBundleChild = v3
  local v4 = v4:getValue("vehicle.protectedBundleVehicle#bundleFilename")
  v3 = Utils.getFilename(v4, self.baseDirectory)
  self.spec_protectedBundleVehicle.bundleFilename = v3
  if self.spec_protectedBundleVehicle.bundleFilename ~= nil then
    v3 = v3:getItemByXMLFilename(self.spec_protectedBundleVehicle.bundleFilename)
    if v3 == nil then
      Logging.xmlWarning(self.xmlFile, "Missing bundle vehicle store item for '%s'", self.spec_protectedBundleVehicle.bundleFilename)
    end
  end
  if v2.isBundleChild then
    self.canBeReset = false
    self.showInVehicleOverview = false
    self.allowSelection = false
  end
  if self.isServer then
    -- if v2.isBundleChild then goto L79 end
  end
  SpecializationUtil.removeEventListener(self, "onPostDetach", ProtectedBundleVehicle)
end
function ProtectedBundleVehicle:onPostDetach()
  if not g_currentMission.isReloadingVehicles and not g_currentMission.isTeleporting and not self.isDeleted and not self.isDeleting then
    v1:removeVehicle(self)
  end
end
function ProtectedBundleVehicle:getReloadXML(v1)
  if self.spec_protectedBundleVehicle.isBundleRoot and self.spec_protectedBundleVehicle.bundleFilename ~= nil then
    local v3 = v1(self)
    if v3 ~= nil then
      local v8 = NetworkUtil.convertToNetworkFilename(self.spec_protectedBundleVehicle.bundleFilename)
      local v7 = HTMLUtil.encodeToHTML(...)
      v3:setValue(...)
    end
    return v3
  end
  v3 = v1(self)
  return v3
end
