-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BunkerSiloCompacter = {XML_PATH = "vehicle.bunkerSiloCompacter"}
function BunkerSiloCompacter.prerequisitesPresent(v0)
  return true
end
function BunkerSiloCompacter.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("BunkerSiloCompacter")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, BunkerSiloCompacter.XML_PATH .. "#compactingScale", "Compacting scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, BunkerSiloCompacter.XML_PATH .. "#useSpeedLimit", "Defines if speed limit is used while compactor has contact with ground", false)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, BunkerSiloCompacter.XML_PATH .. ".sounds", "rolling")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, BunkerSiloCompacter.XML_PATH .. ".sounds", "compacting")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function BunkerSiloCompacter.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadBunkerSiloCompactorFromXML", BunkerSiloCompacter.loadBunkerSiloCompactorFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getBunkerSiloCompacterScale", BunkerSiloCompacter.getBunkerSiloCompacterScale)
end
function BunkerSiloCompacter.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", BunkerSiloCompacter.doCheckSpeedLimit)
end
function BunkerSiloCompacter.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", BunkerSiloCompacter)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", BunkerSiloCompacter)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", BunkerSiloCompacter)
end
function BunkerSiloCompacter:onLoad(savegame)
  self:loadBunkerSiloCompactorFromXML(self.xmlFile, BunkerSiloCompacter.XML_PATH)
  if self.isClient then
    self.spec_bunkerSiloCompacter.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, BunkerSiloCompacter.XML_PATH .. ".sounds", "rolling", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_bunkerSiloCompacter.samples.rolling = v4
    v4 = v4:loadSampleFromXML(self.xmlFile, BunkerSiloCompacter.XML_PATH .. ".sounds", "compacting", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_bunkerSiloCompacter.samples.compacting = v4
    self.spec_bunkerSiloCompacter.lastIsCompacting = false
    self.spec_bunkerSiloCompacter.lastHasGroundContact = false
  end
  if self.getWheels == nil then
    SpecializationUtil.removeEventListener(self, "onUpdate", BunkerSiloCompacter)
  end
end
function BunkerSiloCompacter:onDelete()
  v2:deleteSamples(self.spec_bunkerSiloCompacter.samples)
end
function BunkerSiloCompacter:loadBunkerSiloCompactorFromXML(xmlFile, key)
  local v4 = xmlFile:getValue(key .. "#compactingScale", 1)
  self.spec_bunkerSiloCompacter.scale = v4
  v4 = xmlFile:getValue(key .. "#useSpeedLimit", false)
  self.spec_bunkerSiloCompacter.useSpeedLimit = v4
end
function BunkerSiloCompacter:getBunkerSiloCompacterScale()
  return self.spec_bunkerSiloCompacter.scale
end
function BunkerSiloCompacter:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local wheels = self:getWheels()
  -- TODO: structure LOP_FORNPREP (pc 10, target 28)
  if wheels[1].contact ~= Wheels.WHEEL_NO_CONTACT then
    -- if v8[1].contact ~= Wheels.WHEEL_GROUND_HEIGHT_CONTACT then goto L27 end
  else
    -- TODO: structure LOP_FORNLOOP (pc 27, target 11)
  end
  if v5.lastHasGroundContact == v6 then
    -- if v5.lastIsCompacting == v7 then goto L139 end
  end
  if v6 then
    if v7 then
      local v9 = v9:getIsSamplePlaying(v5.samples.compacting)
      -- if v9 then goto L77 end
      v9:playSample(v5.samples.compacting)
    else
      v9 = v9:getIsSamplePlaying(v5.samples.compacting)
      if v9 then
        v9:stopSample(v5.samples.compacting)
      end
    end
    v9 = v9:getIsSamplePlaying(v5.samples.rolling)
    -- if v9 then goto L135 end
    v9:playSample(v5.samples.rolling)
  else
    v9 = v9:getIsSamplePlaying(v5.samples.compacting)
    if v9 then
      v9:stopSample(v5.samples.compacting)
    end
    v9 = v9:getIsSamplePlaying(v5.samples.rolling)
    if v9 then
      v9:stopSample(v5.samples.rolling)
    end
  end
  v5.lastHasGroundContact = v6
  v5.lastIsCompacting = v7
end
function BunkerSiloCompacter:doCheckSpeedLimit(superFunc)
  if self.spec_bunkerSiloCompacter.useSpeedLimit then
    local v3 = superFunc(self)
    if not v3 then
    end
    return v3
  end
  v3 = superFunc(self)
  return v3
end
function BunkerSiloCompacter.getDefaultSpeedLimit()
  return 5
end
