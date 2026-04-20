-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LicensePlates = {}
function LicensePlates.prerequisitesPresent(v0)
  return true
end
function LicensePlates.initSpecialization()
  v0:addSpecType("licensePlate", "shopListAttributeIconLicensePlate", LicensePlates.loadSpecValuePlateText, LicensePlates.getSpecValuePlateText, "vehicle")
  Vehicle.xmlSchema:setXMLSpecializationType("LicensePlates")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.licensePlates#defaultPlacement", "Defines the default placement index independent of map setting (NONE|BOTH|BACK_ONLY)", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.licensePlates.licensePlate(?)#node", "License plate node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.licensePlates.licensePlate(?)#preferedType", "Prefered license plate type to be placed if available")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_4, "vehicle.licensePlates.licensePlate(?)#placementArea", "Defines the available area around the node (top, right, bottom, left) ('-' means unlimited)")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.licensePlates.licensePlate(?)#position", "Position of license plate ('FRONT' or 'BACK')", "ANY")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.licensePlates.licensePlate(?)#frame", "License plate with frame of without frame", true)
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.licensePlates.licensePlate(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).licensePlates#variation", "License plate variation", 1)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).licensePlates#characters", "Characters string")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).licensePlates#colorIndex", "Selected color index", 1)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).licensePlates#placementIndex", "Selected placement index", 1)
end
function LicensePlates.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setLicensePlatesData", LicensePlates.setLicensePlatesData)
  SpecializationUtil.registerFunction(vehicleType, "getLicensePlatesData", LicensePlates.getLicensePlatesData)
  SpecializationUtil.registerFunction(vehicleType, "getLicensePlatesDataIsEqual", LicensePlates.getLicensePlatesDataIsEqual)
  SpecializationUtil.registerFunction(vehicleType, "getHasLicensePlates", LicensePlates.getHasLicensePlates)
  SpecializationUtil.registerFunction(vehicleType, "getLicensePlateDialogSettings", LicensePlates.getLicensePlateDialogSettings)
end
function LicensePlates.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", LicensePlates)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", LicensePlates)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", LicensePlates)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", LicensePlates)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", LicensePlates)
end
function LicensePlates:onLoad(savegame)
  self.spec_licensePlates.licensePlates = {}
  local v3 = v3:getValue("vehicle.licensePlates#defaultPlacement")
  if v3 ~= nil then
    local v6 = v3:upper()
    self.spec_licensePlates.defaultPlacementIndex = LicensePlateManager.PLACEMENT_OPTION[v6]
  end
  local v4 = v4:getAreLicensePlatesAvailable()
  if v4 then
    while true do
      v5 = string.format("vehicle.licensePlates.licensePlate(%d)", v4)
      v6 = v6:hasProperty(v5)
      if not v6 then
        break
      end
      v7 = v7:getValue(v5 .. "#node", nil, self.components, self.i3dMappings)
      if {node = v7}.node ~= nil then
        v7 = v7:getValue(v5 .. "#preferedType", "ELONGATED")
        if {node = v7, preferedType = LicensePlateManager.PLATE_TYPE[v7]}.preferedType ~= nil then
          v8 = v8:getString(v5 .. "#placementArea")
          if v8 ~= nil then
            v9 = string.split(v8, " ")
            if #v9 == 4 then
              -- TODO: structure LOP_FORNPREP (pc 111, target 148)
              if v9[1] ~= "-" then
                v13 = tonumber(v9[1])
                if v13 == nil then
                  Logging.xmlWarning(self.xmlFile, "Invalid 4-vector '%s' for '%s'. '%s' is not a number!", v8, v5 .. "#placementArea", v9[1])
                else
                  {node = v7, preferedType = LicensePlateManager.PLATE_TYPE[v7], placementArea = {1, 1, 1, 1}}.placementArea[1] = v13
                end
              end
              -- TODO: structure LOP_FORNLOOP (pc 136, target 112)
            else
              Logging.xmlWarning(self.xmlFile, "Invalid 4-vector '%s' for '%s' ", v8, v5 .. "#placementArea")
            end
          end
          v9 = v9:getValue(v5 .. "#position", "ANY")
          if not LicensePlateManager.PLATE_POSITION[v9] then
          end
          v6.position = v10
          v10 = v10:getValue(v5 .. "#frame", true)
          v11 = v11:getLicensePlate(v6.preferedType, v10)
          v6.data = v11
          -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L400
          link(v6.node, v6.data.node)
          setTranslation(v6.data.node, 0, 0, 0)
          setRotation(v6.data.node, 0, 0, 0)
          setVisibility(v6.data.node, false)
          v18 = math.min((v6.placementArea[2] + v6.placementArea[4]) / (v6.data.rawWidth * 0.5 + v6.data.widthOffsetLeft + v6.data.rawWidth * 0.5 + v6.data.widthOffsetRight), (v6.placementArea[1] + v6.placementArea[3]) / (v6.data.rawHeight * 0.5 + v6.data.heightOffsetTop + v6.data.rawHeight * 0.5 + v6.data.heightOffsetBot))
          v17 = MathUtil.clamp(v18, 0, 1)
          if v17 < 1 then
            setScale(v6.data.node, v17, v17, v17)
          end
          v20 = math.max(v11 - v6.placementArea[2], 0)
          v20 = math.max(v12 - v6.placementArea[4], 0)
          v20 = math.max(v13 - v6.placementArea[1], 0)
          v20 = math.max(v14 - v6.placementArea[3], 0)
          setTranslation(v6.data.node, 0 - v20 + v20, 0 - v20 + v20, 0)
          v6.changeObjects = {}
          ObjectChangeUtil.loadObjectChangeFromXML(self.xmlFile, v5, v6.changeObjects, self.components, self)
          table.insert(v2.licensePlates, v6)
        else
          Logging.xmlError(self.xmlFile, "Unknown preferedType '%s' for license plate '%s'", v7, v5)
        end
      end
    end
    v5 = self:getHasLicensePlates()
    -- if not v5 then goto L429 end
    v2.licensePlateData = {variation = 1, characters = nil, colorIndex = nil}
    return
  end
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.licensePlates.licensePlate", -1, self.components, self)
end
function LicensePlates:onPostLoad(savegame)
  -- TODO: structure LOP_FORNPREP (pc 7, target 21)
  ObjectChangeUtil.setObjectChanges(self.spec_licensePlates.licensePlates[1].changeObjects, false, self, self.setMovingToolDirty)
  -- TODO: structure LOP_FORNLOOP (pc 20, target 8)
  if savegame ~= nil then
    local v3 = self:getHasLicensePlates()
    if v3 then
      v3 = v3:getValue(savegame.key .. ".licensePlates#variation", 1)
      local v4 = v4:getValue(savegame.key .. ".licensePlates#characters")
      local v5 = v5:getValue(savegame.key .. ".licensePlates#colorIndex", 1)
      local v6 = v6:getValue(savegame.key .. ".licensePlates#placementIndex", 1)
      if v3 ~= nil and v4 ~= nil and v5 ~= nil and v6 ~= nil then
        local v8 = v4:len()
        -- TODO: structure LOP_FORNPREP (pc 82, target 94)
        local v14 = v4:sub(1, 1)
        table.insert(...)
        -- TODO: structure LOP_FORNLOOP (pc 93, target 83)
        self.spec_licensePlates.licensePlateData = {variation = v3, characters = {}, colorIndex = v5, placementIndex = v6}
        self:setLicensePlatesData(self.spec_licensePlates.licensePlateData)
      end
    end
  end
end
function LicensePlates:onDelete(savegame)
  self.spec_licensePlates.licensePlates = {}
end
function LicensePlates:saveToXMLFile(xmlFile, key, usedModNames)
  local v5 = self:getHasLicensePlates()
  if v5 and self.spec_licensePlates.licensePlateData and self.spec_licensePlates.licensePlateData.placementIndex ~= LicensePlateManager.PLACEMENT_OPTION.NONE and self.spec_licensePlates.licensePlateData.variation ~= nil and self.spec_licensePlates.licensePlateData.characters ~= nil and self.spec_licensePlates.licensePlateData.colorIndex ~= nil then
    xmlFile:setValue(key .. "#variation", self.spec_licensePlates.licensePlateData.variation)
    local v8 = table.concat(self.spec_licensePlates.licensePlateData.characters, "")
    xmlFile:setValue(...)
    xmlFile:setValue(key .. "#colorIndex", self.spec_licensePlates.licensePlateData.colorIndex)
    xmlFile:setValue(key .. "#placementIndex", self.spec_licensePlates.licensePlateData.placementIndex)
  end
end
function LicensePlates:onReadStream(streamId, connection)
  local v4 = LicensePlateManager.readLicensePlateData(streamId, connection)
  self.spec_licensePlates.licensePlateData = v4
  self:setLicensePlatesData(self.spec_licensePlates.licensePlateData)
end
function LicensePlates:onWriteStream(streamId, connection)
  LicensePlateManager.writeLicensePlateData(streamId, connection, self.spec_licensePlates.licensePlateData)
end
function LicensePlates:setLicensePlatesData(licensePlateData)
  if licensePlateData ~= nil and licensePlateData.variation ~= nil and licensePlateData.characters ~= nil and licensePlateData.colorIndex ~= nil and licensePlateData.placementIndex ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 25, target 102)
    if licensePlateData.placementIndex == LicensePlateManager.PLACEMENT_OPTION.NONE then
    elseif licensePlateData.placementIndex == LicensePlateManager.PLACEMENT_OPTION.BACK_ONLY and self.spec_licensePlates.licensePlates[1].position == LicensePlateManager.PLATE_POSITION.FRONT then
    end
    if v7 then
      local v12 = table.concat(licensePlateData.characters, "")
      v8:updateData(licensePlateData.variation, v6.position, v12, true)
      v8:setColorIndex(licensePlateData.colorIndex)
      setVisibility(v6.data.node, true)
    else
      setVisibility(v6.data.node, false)
    end
    ObjectChangeUtil.setObjectChanges(v6.changeObjects, v7, self, self.setMovingToolDirty)
    -- TODO: structure LOP_FORNLOOP (pc 101, target 26)
    v2.licensePlateData = licensePlateData
    return
  end
  -- TODO: structure LOP_FORNPREP (pc 110, target 123)
  setVisibility(v2.licensePlates[1].data.node, false)
  -- TODO: structure LOP_FORNLOOP (pc 122, target 111)
end
function LicensePlates:getLicensePlatesData()
  return self.spec_licensePlates.licensePlateData
end
function LicensePlates:getLicensePlatesDataIsEqual(data)
  if data ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L10
  end
  return true
  if data.variation == self.spec_licensePlates.licensePlateData.variation and data.colorIndex == self.spec_licensePlates.licensePlateData.colorIndex then
    -- if v1.placementIndex == v0.spec_licensePlates.licensePlateData.placementIndex then goto L34 end
  end
  return false
  if data.characters ~= nil and v2.characters ~= nil then
    if #data.characters ~= #v2.characters then
      return false
    end
    -- TODO: structure LOP_FORNPREP (pc 57, target 69)
    if data.characters[1] ~= v2.characters[1] then
      return false
    end
    -- TODO: structure LOP_FORNLOOP (pc 68, target 58)
  end
  return true
end
function LicensePlates:getHasLicensePlates()
  if 0 >= #self.spec_licensePlates.licensePlates then
  end
  return true
end
function LicensePlates:getLicensePlateDialogSettings()
  -- TODO: structure LOP_FORNPREP (pc 8, target 21)
  if self.spec_licensePlates.licensePlates[1].position == LicensePlateManager.PLATE_POSITION.FRONT then
  else
    -- TODO: structure LOP_FORNLOOP (pc 20, target 9)
  end
  return licensePlateData.defaultPlacementIndex, v2
end
function LicensePlates.loadSpecValuePlateText(xmlFile, customEnvironment, baseDir)
  return nil
end
function LicensePlates.getSpecValuePlateText(storeItem, realItem)
  if realItem == nil then
    return nil
  end
  if realItem.getHasLicensePlates ~= nil then
    local v2 = realItem:getHasLicensePlates()
    -- if v2 then goto L14 end
  end
  return nil
  -- TODO: structure LOP_FORNPREP (pc 21, target 43)
  if realItem.spec_licensePlates.licensePlates[1].position ~= LicensePlateManager.PLATE_POSITION.BACK then
    -- if 1 ~= #v1.spec_licensePlates.licensePlates then goto L42 end
  end
  local v7 = v7:getFormattedString()
  return v7
  -- TODO: structure LOP_FORNLOOP (pc 42, target 22)
  return nil
end
