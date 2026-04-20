-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ManureSensorLinkageData = {MOD_NAME = g_currentModName, BASE_DIRECTORY = g_currentModDirectory, xmlSchema = nil}
local ManureSensorLinkageData_mt = Class(ManureSensorLinkageData)
function ManureSensorLinkageData.new(precisionFarming, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.precisionFarming = precisionFarming
  v2.configurationPrice = 0
  v2.sensorData = {}
  v2.linkageData = {}
  v2.dataLoaded = false
  local v4 = XMLSchema.new("manureSensorLinkageData")
  ManureSensorLinkageData.xmlSchema = v4
  v2:registerXMLPaths(ManureSensorLinkageData.xmlSchema)
  return v2
end
function ManureSensorLinkageData:delete()
  -- TODO: structure LOP_FORNPREP (pc 5, target 15)
  delete(self.sensorData[1].node)
  -- TODO: structure LOP_FORNLOOP (pc 14, target 6)
  self.sensorData = {}
  self.linkageData = {}
end
function ManureSensorLinkageData:loadFromXML(_, _, baseDirectory, configFileName, mapFilename)
  if not self.dataLoaded then
    self:loadLinkageData()
  end
end
function ManureSensorLinkageData:loadLinkageData(loadVehicleData, loadSensorData)
  local v3 = Utils.getFilename("ManureSensorLinkageData.xml", ManureSensorLinkageData.BASE_DIRECTORY)
  local v4 = XMLFile.load("ManureSensorLinkageData", v3, ManureSensorLinkageData.xmlSchema)
  if v4 ~= nil then
    local v5 = v4:getValue("manureSensorLinkageData.configuration#price", 0)
    self.configurationPrice = v5
    if loadVehicleData ~= false then
      self.linkageData = {}
      v4:iterate("manureSensorLinkageData.vehicles.vehicle", function(self, loadVehicleData)
        local v3 = v3:getValue(loadVehicleData .. "#filename")
        if {filename = v3}.filename ~= nil then
          v3:iterate(loadVehicleData .. ".linkNode", function(self, loadVehicleData)
            local v3 = v3:getValue(loadVehicleData .. "#node")
            v3 = v3:getValue(loadVehicleData .. "#type", "DEFAULT")
            v3 = v3:upper()
            v3 = v3:getValue(loadVehicleData .. "#translation", "0 0 0", true)
            v3 = v3:getValue(loadVehicleData .. "#rotation", "0 0 0", true)
            v3 = v3:getValue(loadVehicleData .. "#scale", "1 1 1", true)
            table.insert(u1.linkNodes, {nodeName = v3, typeName = v3, translation = v3, rotation = v3, scale = v3})
          end)
        end
        table.insert(u1.linkageData, loadSensorData)
      end)
    end
    if loadSensorData ~= false then
      v5 = v4:getValue("manureSensorLinkageData.sensors#filename")
      if v5 ~= nil then
        local v6 = Utils.getFilename(v5, ManureSensorLinkageData.BASE_DIRECTORY)
        v6:loadI3DFileAsync(v6, true, true, ManureSensorLinkageData.onSensorDataLoaded, self, {v4})
        -- goto L82  (LOP_JUMP +7)
      end
      v4:delete()
    else
      v4:delete()
    end
  end
  self.dataLoaded = true
  return true
end
function ManureSensorLinkageData:onSensorDataLoaded(i3dNode, failedReason, args)
  local xmlFile = unpack(args)
  if i3dNode ~= 0 then
    xmlFile:iterate("manureSensorLinkageData.sensors.sensor", function(self, i3dNode)
      local args = args:getValue(i3dNode .. "#node", nil, u1)
      if {node = args}.node ~= nil then
        args = args:getValue(i3dNode .. "#type", "DEFAULT")
        table.insert(u2.sensorData, {node = args, ["type"] = args})
      end
    end)
    -- TODO: structure LOP_FORNPREP (pc 20, target 30)
    unlink(self.sensorData[1].node)
    -- TODO: structure LOP_FORNLOOP (pc 29, target 21)
    delete(i3dNode)
  end
  xmlFile:delete()
end
function ManureSensorLinkageData:getManureSensorLinkageData(configFileName)
  -- TODO: structure LOP_FORNPREP (pc 5, target 17)
  local v6 = configFileName:endsWith(self.linkageData[1].filename)
  if v6 then
    return self.linkageData[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 16, target 6)
end
function ManureSensorLinkageData:getClonedManureSensorNode(typeName)
  -- TODO: structure LOP_FORNPREP (pc 5, target 60)
  local v6 = v6:upper()
  local v7 = typeName:upper()
  if v6 == v7 then
    v6 = table.copy(self.sensorData[1], 10)
    v7 = clone(self.sensorData[1].node, false, false, false)
    v6.node = v7
    setTranslation(v6.node, 0, 0, 0)
    setRotation(v6.node, 0, 0, 0)
    setScale(v6.node, 1, 1, 1)
    return v6
  end
  -- TODO: structure LOP_FORNLOOP (pc 59, target 6)
end
function ManureSensorLinkageData.overwriteGameFunctions(v0, v1)
  v1:overwriteGameFunction(FSBaseMission, "consoleCommandReloadVehicle", function(v0, v1, v2, v3)
    v4:loadLinkageData(true, false)
    return v0(v1, v2, v3)
  end)
  v1:overwriteGameFunction(StoreItemUtil, "getConfigurationsFromXML", function(v0, v1, v2, v3, v4, v5, v6)
    local v7, v8 = v0(v1, v2, v3, v4, v5, v6)
    if not u0.dataLoaded then
      v9:loadLinkageData(true)
    end
    local v9 = v9:getManureSensorLinkageData(v1.filename)
    if v9 ~= nil then
      if v7 == nil then
      end
      if v8 == nil then
      end
      local v12 = v12:getText("configuration_valueNo")
      v12 = v12:getText("configuration_valueYes")
      v7.manureSensor = {{isDefault = true, name = v12, index = 1, dailyUpkeep = 0, saveId = "1", isSelectable = true, price = 0, nameCompareParams = {}}, {isDefault = false, name = v12, index = 2, dailyUpkeep = 0, saveId = "2", isSelectable = true, price = u0.configurationPrice, nameCompareParams = {}}}
    end
    return v7, v8
  end)
end
function ManureSensorLinkageData.registerXMLPaths(v0, v1)
  v1:register(XMLValueType.STRING, "manureSensorLinkageData.sensors#filename", "Link to i3d filename containing the sensors")
  v1:register(XMLValueType.STRING, "manureSensorLinkageData.sensors.sensor(?)#type", "Type of sensor (DEFAULT)")
  v1:register(XMLValueType.NODE_INDEX, "manureSensorLinkageData.sensors.sensor(?)#node", "Path to sensor node")
  v1:register(XMLValueType.STRING, "manureSensorLinkageData.vehicles.vehicle(?)#filename", "Last part of vehicle filename")
  v1:register(XMLValueType.STRING, "manureSensorLinkageData.vehicles.vehicle(?).linkNode(?)#node", "Name of node in i3d mapping")
  v1:register(XMLValueType.STRING, "manureSensorLinkageData.vehicles.vehicle(?).linkNode(?)#type", "Type of node to link (DEFAULT)")
  v1:register(XMLValueType.VECTOR_TRANS, "manureSensorLinkageData.vehicles.vehicle(?).linkNode(?)#translation", "Translation offset from node", "0 0 0")
  v1:register(XMLValueType.VECTOR_ROT, "manureSensorLinkageData.vehicles.vehicle(?).linkNode(?)#rotation", "Rotation offset from node", "0 0 0")
  v1:register(XMLValueType.VECTOR_SCALE, "manureSensorLinkageData.vehicles.vehicle(?).linkNode(?)#scale", "Scale of sensor node", "1 1 1")
  v1:register(XMLValueType.FLOAT, "manureSensorLinkageData.configuration#price", "Price of crop sensor config", 0)
end
