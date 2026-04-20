-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Pallet = {PHYSICS_FIX_ENABLED = true}
function Pallet.prerequisitesPresent(v0)
  return true
end
function Pallet.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Pallet")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.pallet#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.pallet#node", "Root visual pallet node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.pallet.content(?)#fillUnitIndex", "Fill unit index for this content", "pallet#fillUnitIndex")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.pallet.content(?).object(?)#node", "Object node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.pallet.content(?).object(?)#tensionBeltNode", "Object used for tension belt calculations")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.pallet.content(?).object(?)#useAsTensionBeltMesh", "Flag for toggling object node being used as tension belt node", true)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.pallet.sounds", "unload")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Pallet.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getInfoBoxTitle", Pallet.getInfoBoxTitle)
end
function Pallet.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getMeshNodes", Pallet.getMeshNodes)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadComponentFromXML", Pallet.loadComponentFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAutoLoadSize", Pallet.getAutoLoadSize)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "autoLoad", Pallet.autoLoad)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getShowInVehiclesOverview", Pallet.getShowInVehiclesOverview)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeReset", Pallet.getCanBeReset)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMapHotspotVisible", Pallet.getIsMapHotspotVisible)
end
function Pallet.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPreLoad", Pallet)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Pallet)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Pallet)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", Pallet)
end
function Pallet:onPreLoad(savegame)
  self.isPallet = true
  self.allowsInput = false
end
function Pallet:onLoad(savegame)
  local v3 = v3:getValue("vehicle.pallet#fillUnitIndex", 1)
  self.spec_pallet.fillUnitIndex = v3
  v3 = v3:getValue("vehicle.pallet#node", nil, self.components, self.i3dMappings)
  self.spec_pallet.node = v3
  self.spec_pallet.contents = {}
  v3:iterate("vehicle.pallet.content", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#fillUnitIndex", u1.fillUnitIndex)
    v3:iterate(savegame .. ".object", function(self, savegame)
      local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
      if {node = v3}.node ~= nil then
        v3 = v3:getValue(savegame .. "#useAsTensionBeltMesh", true)
        if {node = v3, useAsTensionBeltMesh = v3}.useAsTensionBeltMesh then
          v3 = v3:getValue(savegame .. "#tensionBeltNode", nil, u0.components, u0.i3dMappings)
          if v3 ~= nil then
            local v4 = getShapeIsCPUMesh(v3)
            if v4 then
              -- goto L101  (LOP_JUMP +36)
            end
            local v7 = getName(v3)
            Logging.xmlWarning(u0.xmlFile, "Shape '%s' defined in '%s' does not have 'CPU-Mesh' flag set. Ignoring this node", v7, savegame .. "#tensionBeltNode")
          else
            v4 = getShapeIsCPUMesh({node = v3, useAsTensionBeltMesh = v3}.node)
            if not v4 then
              v7 = getName({node = v3, useAsTensionBeltMesh = v3}.node)
              Logging.xmlWarning(u0.xmlFile, "Shape '%s' defined in '%s' does not have 'CPU-Mesh' flag set. Either set the flag on the mesh or add a custom tension belt node uing xml attribute '#tensionBeltNode'", v7, savegame .. "#node")
            end
          end
        end
        v2.isActive = false
        setVisibility(v2.node, v2.isActive)
        table.insert(u1.objects, v2)
      end
    end)
    if 0 < #{objects = {}, fillUnitIndex = v3}.objects then
      table.insert(u1.contents, {objects = {}, fillUnitIndex = v3, numObjects = #{objects = {}, fillUnitIndex = v3}.objects})
    end
  end)
  self.spec_pallet.tensionBeltMeshes = {self.spec_pallet.node}
  self.spec_pallet.tensionBeltMeshesDirty = false
  if self.isClient then
    self.spec_pallet.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.pallet.sounds", "unload", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_pallet.samples.unload = v4
  end
  v3:addLimitedObject(SlotSystem.LIMITED_OBJECT_PALLET, self)
  self.dynamicMountForkXLimit = 0.01
  self.dynamicMountForkYLimit = 0.1
end
function Pallet:onDelete()
  if self.isClient then
    v2:deleteSamples(self.spec_pallet.samples)
  end
  v1:removeLimitedObject(SlotSystem.LIMITED_OBJECT_PALLET, self)
end
function Pallet.loadComponentFromXML(v0, v1, v2, v3, v4, v5, v6)
  if not Platform.gameplay.hasDynamicPallets then
    local v7 = getRigidBodyType(v2.node)
    if v7 == RigidBodyType.DYNAMIC then
      setRigidBodyType(v2.node, RigidBodyType.KINEMATIC)
    end
  end
  v7 = v1(v0, v2, v3, v4, v5, v6)
  return v7
end
function Pallet:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillType, toolType, fillPositionData, appliedDelta)
  -- TODO: structure LOP_FORNPREP (pc 7, target 78)
  if self.spec_pallet.contents[1].fillUnitIndex == fillUnitIndex then
    local fillLevelPct = self:getFillUnitFillLevelPercentage(fillUnitIndex)
    local v13 = math.floor(self.spec_pallet.contents[1].numObjects * fillLevelPct)
    if v13 == 0 and fillLevelPct then
    end
    -- TODO: structure LOP_FORNPREP (pc 35, target 77)
    if 1 > v13 then
    end
    if v17.isActive ~= true then
      if v17.isActive then
      end
      if v19 and self.isClient then
        v20:playSample(v7.samples.unload)
      end
      v17.isActive = v18
      setVisibility(v17.node, v17.isActive)
      v7.tensionBeltMeshesDirty = true
    end
    -- TODO: structure LOP_FORNLOOP (pc 76, target 36)
  end
  -- TODO: structure LOP_FORNLOOP (pc 77, target 8)
end
function Pallet:getMeshNodes(superFunc)
  if self.spec_pallet.tensionBeltMeshesDirty then
    self.spec_pallet.tensionBeltMeshes = {}
    if self.spec_pallet.node ~= nil then
      table.insert(self.spec_pallet.tensionBeltMeshes, self.spec_pallet.node)
    end
    -- TODO: structure LOP_FORNPREP (pc 27, target 60)
    for v9 = 1, #v2.contents[1].objects do
      if v6.objects[v9].isActive and v6.objects[v9].useAsTensionBeltMesh then
        if not v6.objects[v9].tensionBeltNode then
        end
        table.insert(v12, v13)
      end
      -- TODO: structure LOP_FORNLOOP (pc 58, target 37)
    end
  end
  if 0 < #v2.tensionBeltMeshes then
    return v2.tensionBeltMeshes
  end
  return superFunc(self)
end
function Pallet.getInfoBoxTitle(v0)
  return v1:getText("infohud_pallet")
end
function Pallet:getAutoLoadSize(v1)
  return self.size.length, self.size.height, self.size.width
end
function Pallet:autoLoad(v1, v2, v3, v4, v5, v6, v7)
  self:mountKinematic(v2, v3, v4 + v6 * 0.5, 0, v5 + v7 * 0.5, 0, math.pi * 0.5, 0)
  return true
end
function Pallet.getShowInVehiclesOverview(v0, v1)
  return false
end
function Pallet.getCanBeReset(v0, v1)
  return false
end
function Pallet.getIsMapHotspotVisible(v0, v1)
  return false
end
