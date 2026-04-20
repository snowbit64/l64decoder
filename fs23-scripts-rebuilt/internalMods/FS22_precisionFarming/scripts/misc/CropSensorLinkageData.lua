-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CropSensorLinkageData = {MOD_NAME = g_currentModName, BASE_DIRECTORY = g_currentModDirectory, xmlSchema = nil}
local CropSensorLinkageData_mt = Class(CropSensorLinkageData)
function CropSensorLinkageData.new(precisionFarming, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.precisionFarming = precisionFarming
  v2.configurationPrice = 0
  v2.sensorData = {}
  v2.linkageData = {}
  v2.dataLoaded = false
  local v4 = XMLSchema.new("cropSensorLinkageData")
  CropSensorLinkageData.xmlSchema = v4
  v2:registerXMLPaths(CropSensorLinkageData.xmlSchema)
  return v2
end
function CropSensorLinkageData:delete()
  -- TODO: structure LOP_FORNPREP (pc 5, target 15)
  delete(self.sensorData[1].node)
  -- TODO: structure LOP_FORNLOOP (pc 14, target 6)
  self.sensorData = {}
  self.linkageData = {}
end
function CropSensorLinkageData:loadFromXML(_, _, baseDirectory, configFileName, mapFilename)
  if not self.dataLoaded then
    self:loadLinkageData()
  end
end
function CropSensorLinkageData:loadLinkageData(loadVehicleData, loadSensorData)
  local v3 = Utils.getFilename("CropSensorLinkageData.xml", CropSensorLinkageData.BASE_DIRECTORY)
  local v4 = XMLFile.load("CropSensorLinkageData", v3, CropSensorLinkageData.xmlSchema)
  if v4 ~= nil then
    local v5 = v4:getValue("cropSensorLinkageData.configuration#price", 0)
    self.configurationPrice = v5
    if loadVehicleData ~= false then
      self.linkageData = {}
      v4:iterate("cropSensorLinkageData.vehicles.vehicle", function(self, loadVehicleData)
        local v3 = v3:getValue(loadVehicleData .. "#filename")
        if {filename = v3}.filename ~= nil then
          v3:iterate(loadVehicleData .. ".linkNode", function(self, loadVehicleData)
            local v3 = v3:getValue(loadVehicleData .. "#node")
            v3 = v3:getValue(loadVehicleData .. "#type", "SENSOR_LEFT")
            v3 = v3:upper()
            v3 = v3:getValue(loadVehicleData .. "#translation", "0 0 0", true)
            v3 = v3:getValue(loadVehicleData .. "#rotation", "0 0 0", true)
            v3:iterate(loadVehicleData .. ".rotationNode", function(self, loadVehicleData)
              local v3 = v3:getValue(loadVehicleData .. "#autoRotate")
              v3 = v3:getValue(loadVehicleData .. "#rotation", nil, true)
              table.insert(u1.rotationNodes, {autoRotate = v3, rotation = v3})
            end)
            table.insert(u1.linkNodes, {nodeName = v3, typeName = v3, translation = v3, rotation = v3, rotationNodes = {}})
          end)
        end
        table.insert(u1.linkageData, loadSensorData)
      end)
    end
    if loadSensorData ~= false then
      v5 = v4:getValue("cropSensorLinkageData.sensors#filename")
      if v5 ~= nil then
        local v6 = Utils.getFilename(v5, CropSensorLinkageData.BASE_DIRECTORY)
        v6:loadI3DFileAsync(v6, true, true, CropSensorLinkageData.onSensorDataLoaded, self, {v4})
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
function CropSensorLinkageData:onSensorDataLoaded(i3dNode, failedReason, args)
  local xmlFile = unpack(args)
  if i3dNode ~= 0 then
    xmlFile:iterate("cropSensorLinkageData.sensors.sensor", function(self, i3dNode)
      local args = args:getValue(i3dNode .. "#node", nil, u1)
      if {node = args}.node ~= nil then
        args = args:getValue(i3dNode .. "#type", "SENSOR_LEFT")
        args = args:getValue(i3dNode .. "#measurementNode")
        args = args:getValue(i3dNode .. "#requiresDaylight", true)
        args:iterate(i3dNode .. ".rotationNode", function(self, i3dNode)
          local args = args:getValue(i3dNode .. "#node")
          args = args:getValue(i3dNode .. "#autoRotate")
          table.insert(u1.rotationNodes, {nodePath = args, autoRotate = args})
        end)
        table.insert(u2.sensorData, {node = args, ["type"] = args, measurementNodePath = args, requiresDaylight = args, rotationNodes = {}})
      end
    end)
    -- TODO: structure LOP_FORNPREP (pc 20, target 30)
    unlink(self.sensorData[1].node)
    -- TODO: structure LOP_FORNLOOP (pc 29, target 21)
    delete(i3dNode)
  end
  xmlFile:delete()
end
function CropSensorLinkageData:getCropSensorLinkageData(configFileName)
  -- TODO: structure LOP_FORNPREP (pc 5, target 17)
  local v6 = configFileName:endsWith(self.linkageData[1].filename)
  if v6 then
    return self.linkageData[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 16, target 6)
end
function CropSensorLinkageData:getClonedCropSensorNode(typeName)
  -- TODO: structure LOP_FORNPREP (pc 5, target 68)
  local v6 = v6:upper()
  local v7 = typeName:upper()
  if v6 == v7 then
    v6 = table.copy(self.sensorData[1], 10)
    v7 = clone(self.sensorData[1].node, false, false, false)
    v6.node = v7
    -- TODO: structure LOP_FORNPREP (pc 39, target 53)
    local v11 = I3DUtil.indexToObject(v6.node, v6.rotationNodes[1].nodePath)
    v6.rotationNodes[1].node = v11
    -- TODO: structure LOP_FORNLOOP (pc 52, target 40)
    if v6.measurementNodePath ~= nil then
      v7 = I3DUtil.indexToObject(v6.node, v6.measurementNodePath)
      v6.measurementNode = v7
    end
    return v6
  end
  -- TODO: structure LOP_FORNLOOP (pc 67, target 6)
end
function CropSensorLinkageData.overwriteGameFunctions(v0, v1)
  v1:overwriteGameFunction(FSBaseMission, "consoleCommandReloadVehicle", function(v0, v1, v2, v3)
    v4:loadLinkageData(true, false)
    return v0(v1, v2, v3)
  end)
  v1:overwriteGameFunction(StoreItemUtil, "getConfigurationsFromXML", function(v0, v1, v2, v3, v4, v5, v6)
    local v7, v8 = v0(v1, v2, v3, v4, v5, v6)
    if not u0.dataLoaded then
      v9:loadLinkageData(true)
    end
    local v9 = v9:getCropSensorLinkageData(v1.filename)
    if v9 ~= nil then
      if v7 == nil then
      end
      if v8 == nil then
      end
      local v12 = v12:getText("configuration_valueNo")
      v12 = v12:getText("configuration_valueYes")
      v7.cropSensor = {{isDefault = true, name = v12, index = 1, dailyUpkeep = 0, saveId = "1", isSelectable = true, price = 0, nameCompareParams = {}}, {isDefault = false, name = v12, index = 2, dailyUpkeep = 0, saveId = "2", isSelectable = true, price = u0.configurationPrice, nameCompareParams = {}}}
    end
    return v7, v8
  end)
end
function CropSensorLinkageData.registerXMLPaths(v0, v1)
  v1:register(XMLValueType.STRING, "cropSensorLinkageData.sensors#filename", "Link to i3d filename containing the sensors")
  v1:register(XMLValueType.STRING, "cropSensorLinkageData.sensors.sensor(?)#type", "Type of sensor (SENSOR_LEFT | SENSOR_RIGHT | SENSOR_TOP)")
  v1:register(XMLValueType.NODE_INDEX, "cropSensorLinkageData.sensors.sensor(?)#node", "Path to sensor node")
  v1:register(XMLValueType.STRING, "cropSensorLinkageData.sensors.sensor(?)#measurementNode", "Reference node for measuring")
  v1:register(XMLValueType.BOOL, "cropSensorLinkageData.sensors.sensor(?)#requiresDaylight", "Sensor requires daylight", true)
  v1:register(XMLValueType.STRING, "cropSensorLinkageData.sensors.sensor(?).rotationNode(?)#node", "Path to rotation node")
  v1:register(XMLValueType.BOOL, "cropSensorLinkageData.sensors.sensor(?).rotationNode(?)#autoRotate", "Rotation will be automatically adjusted to the vehicle orientation", false)
  v1:register(XMLValueType.STRING, "cropSensorLinkageData.vehicles.vehicle(?)#filename", "Last part of vehicle filename")
  v1:register(XMLValueType.STRING, "cropSensorLinkageData.vehicles.vehicle(?).linkNode(?)#node", "Name of node in i3d mapping")
  v1:register(XMLValueType.STRING, "cropSensorLinkageData.vehicles.vehicle(?).linkNode(?)#type", "Type of node to link (SENSOR_LEFT | SENSOR_RIGHT | SENSOR_TOP)")
  v1:register(XMLValueType.VECTOR_TRANS, "cropSensorLinkageData.vehicles.vehicle(?).linkNode(?)#translation", "Translation offset from node", "0 0 0")
  v1:register(XMLValueType.VECTOR_ROT, "cropSensorLinkageData.vehicles.vehicle(?).linkNode(?)#rotation", "Rotation offset from node", "0 0 0")
  v1:register(XMLValueType.BOOL, "cropSensorLinkageData.vehicles.vehicle(?).linkNode(?).rotationNode(?)#autoRotate", "Rotation will be automatically adjusted to the vehicle orientation")
  v1:register(XMLValueType.VECTOR_ROT, "cropSensorLinkageData.vehicles.vehicle(?).linkNode(?).rotationNode(?)#rotation", "Rotation of rotation node", "0 0 0")
  v1:register(XMLValueType.FLOAT, "cropSensorLinkageData.configuration#price", "Price of crop sensor config", 0)
end
