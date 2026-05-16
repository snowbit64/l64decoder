-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConnectionHoseType = nil
ConnectionHoseManager = {DEFAULT_HOSES_FILENAME = "data/shared/connectionHoses/connectionHoses.xml", xmlSchema = nil}
local ConnectionHoseManager_mt = Class(ConnectionHoseManager, AbstractManager)
function ConnectionHoseManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1:initDataStructures()
  local v3 = XMLSchema.new("connectionHoses")
  ConnectionHoseManager.xmlSchema = v3
  v2:registerXMLPaths(ConnectionHoseManager.xmlSchema)
  return v1
end
function ConnectionHoseManager:initDataStructures()
  self.xmlFiles = {}
  self.typeByName = {}
  ConnectionHoseType = self.typeByName
  self.basicHoses = {}
  self.sockets = {}
  self.sharedLoadRequestIds = {}
  self.modConnectionHosesToLoad = {}
end
function ConnectionHoseManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  self.baseDirectory = baseDirectory
  self:loadConnectionHosesFromXML(ConnectionHoseManager.DEFAULT_HOSES_FILENAME, nil, self.baseDirectory)
  -- TODO: structure LOP_FORNPREP (pc 26, target 44)
  self:loadConnectionHosesFromXML(self.modConnectionHosesToLoad[#self.modConnectionHosesToLoad].xmlFilename, self.modConnectionHosesToLoad[#self.modConnectionHosesToLoad].customEnvironment, self.modConnectionHosesToLoad[#self.modConnectionHosesToLoad].baseDirectory)
  self.modConnectionHosesToLoad[#self.modConnectionHosesToLoad] = nil
  -- TODO: structure LOP_FORNLOOP (pc 43, target 27)
end
function ConnectionHoseManager:unloadMapData()
  for v4, v5 in ipairs(self.basicHoses) do
    delete(v5.node)
  end
  for v4, v5 in pairs(self.typeByName) do
    for v9, v10 in pairs(v5.adapters) do
      delete(v10.node)
      delete(v10.detachedNode)
    end
    for v9, v10 in pairs(v5.hoses) do
      delete(v10.materialNode)
    end
  end
  for v4, v5 in pairs(self.sockets) do
    delete(v5.node)
  end
  -- TODO: structure LOP_FORNPREP (pc 70, target 81)
  v5:releaseSharedI3DFile(self.sharedLoadRequestIds[1])
  -- TODO: structure LOP_FORNLOOP (pc 80, target 71)
  for v4, v5 in pairs(self.xmlFiles) do
    self.xmlFiles[v4] = nil
    v4:delete()
  end
  v2 = v2:superClass()
  v2.unloadMapData(self)
end
function ConnectionHoseManager:addModConnectionHoses(xmlFilename, customEnvironment, baseDirectory)
  table.insert(self.modConnectionHosesToLoad, {xmlFilename = xmlFilename, customEnvironment = customEnvironment, baseDirectory = baseDirectory})
end
function ConnectionHoseManager:loadConnectionHosesFromXML(xmlFilename, customEnvironment, baseDirectory)
  Logging.info("Loading ConnectionHoses from '%s'", xmlFilename)
  local v4 = XMLFile.load("TempHoses", xmlFilename, ConnectionHoseManager.xmlSchema)
  if v4 ~= nil then
    self.xmlFiles[v4] = true
    v4.references = 1
    while true do
      v6 = string.format("connectionHoses.basicHoses.basicHose(%d)", v5)
      v7 = v4:hasProperty(v6)
      if not v7 then
        break
      end
      v7 = v4:getValue(v6 .. "#filename")
      if v7 ~= nil then
        v4.references = v4.references + 1
        v8 = Utils.getFilename(v7, baseDirectory)
        v9 = v9:loadSharedI3DFileAsync(v8, false, false, self.basicHoseI3DFileLoaded, self, {xmlFile = v4, hoseKey = v6})
        table.insert(self.sharedLoadRequestIds, v9)
      end
    end
    while true do
      v6 = string.format("connectionHoses.connectionHoseTypes.connectionHoseType(%d)", v5)
      v7 = v4:hasProperty(v6)
      if not v7 then
        break
      end
      v7 = v4:getValue(v6 .. "#name")
      if v7 ~= nil then
        v11 = v7:upper()
        if self.typeByName[v11] ~= nil then
          v10 = v7:upper()
        else
          if customEnvironment ~= nil then
          end
          v10 = v7:upper()
          self.typeByName[v10] = {name = v7, adapters = {}, hoses = {}}
        end
        while true do
          v10 = string.format("%s.adapter(%d)", v6, v9)
          v11 = v4:hasProperty(v10)
          if not v11 then
            break
          end
          v11 = v4:getValue(v10 .. "#name", "DEFAULT")
          if customEnvironment ~= nil then
          end
          v12 = v4:getValue(v10 .. "#filename")
          if v12 ~= nil then
            v4.references = v4.references + 1
            v13 = Utils.getFilename(v12, baseDirectory)
            v14 = v14:loadSharedI3DFileAsync(v13, false, false, self.adapterI3DFileLoaded, self, {hoseType = v8, adapterName = v11, xmlFile = v4, adapterKey = v10})
            table.insert(self.sharedLoadRequestIds, v14)
          end
        end
        while true do
          v10 = string.format("%s.material(%d)", v6, v9)
          v11 = v4:hasProperty(v10)
          if not v11 then
            break
          end
          v11 = v4:getValue(v10 .. "#name", "DEFAULT")
          if customEnvironment ~= nil then
          end
          v12 = v4:getValue(v10 .. "#filename")
          if v12 ~= nil then
            v4.references = v4.references + 1
            v13 = Utils.getFilename(v12, baseDirectory)
            v14 = v14:loadSharedI3DFileAsync(v13, false, false, self.materialI3DFileLoaded, self, {hoseType = v8, hoseName = v11, xmlFile = v4, hoseKey = v10})
            table.insert(self.sharedLoadRequestIds, v14)
          end
        end
      end
    end
    while true do
      v6 = string.format("connectionHoses.sockets.socket(%d)", v5)
      v7 = v4:hasProperty(v6)
      if not v7 then
        break
      end
      v7 = v4:getValue(v6 .. "#name")
      if customEnvironment ~= nil then
      end
      v8 = v4:getValue(v6 .. "#filename")
      if v7 ~= nil and v8 ~= nil then
        v4.references = v4.references + 1
        v9 = Utils.getFilename(v8, baseDirectory)
        v10 = v10:loadSharedI3DFileAsync(v9, false, false, self.socketI3DFileLoaded, self, {name = v7, xmlFile = v4, socketKey = v6})
        table.insert(self.sharedLoadRequestIds, v10)
      end
    end
    v4.references = v4.references - 1
    if v4.references == 0 then
      self.xmlFiles[v4] = nil
      v4:delete()
    end
  end
end
function ConnectionHoseManager:basicHoseI3DFileLoaded(i3dNode, failedReason, args)
  if i3dNode ~= nil and i3dNode ~= 0 then
    local v6 = args.xmlFile:getValue(args.hoseKey .. "#node", nil, i3dNode)
    if v6 ~= nil then
      unlink(v6)
      local v8 = args.xmlFile:getValue(args.hoseKey .. "#startStraightening", 2)
      v8 = args.xmlFile:getValue(args.hoseKey .. "#endStraightening", 2)
      v8 = args.xmlFile:getValue(args.hoseKey .. "#minCenterPointAngle", 90)
      v8 = args.xmlFile:getValue(args.hoseKey .. "#length")
      if v8 == nil then
        local v10 = string.format("Warning: Missing length attribute in '%s'", args.hoseKey)
        print(...)
      end
      local v9 = v4:getValue(v5 .. "#realLength")
      if v9 == nil then
        local v11 = string.format("Warning: Missing realLength attribute in '%s'", v5)
        print(...)
      end
      v10 = v4:getValue(v5 .. "#diameter")
      if v10 == nil then
        local v12 = string.format("Warning: Missing diameter attribute in '%s'", v5)
        print(...)
      end
      if v8 ~= nil and v9 ~= nil and v10 ~= nil then
        v7.length = v8
        v7.realLength = v9
        v7.diameter = v10
        table.insert(self.basicHoses, v7)
      end
    end
    delete(i3dNode)
  end
  v4.references = v4.references - 1
  if v4.references == 0 then
    self.xmlFiles[v4] = nil
    v4:delete()
  end
end
function ConnectionHoseManager:adapterI3DFileLoaded(i3dNode, failedReason, args)
  if i3dNode ~= nil and i3dNode ~= 0 then
    local v8 = args.xmlFile:getValue(args.adapterKey .. "#node", nil, i3dNode)
    local v9 = getChildAt(v8, 0)
    unlink(v8)
    local v10 = args.xmlFile:getValue(args.adapterKey .. "#detachedNode", nil, i3dNode)
    if v10 ~= nil then
      unlink(v10)
    end
    if v9 ~= 0 then
      local v13 = v5:upper()
      v4.adapters[v13] = {node = v8, detachedNode = v10, hoseReferenceNode = v9}
    else
      local v12 = string.format("Warning: Missing hose reference node as child from adapter '%s' in connection type '%s'", v5, v4.name)
      print(...)
    end
    delete(i3dNode)
  end
  v6.references = v6.references - 1
  if v6.references == 0 then
    self.xmlFiles[v6] = nil
    v6:delete()
  end
end
function ConnectionHoseManager:materialI3DFileLoaded(i3dNode, failedReason, args)
  if i3dNode ~= nil and i3dNode ~= 0 then
    local v8 = args.xmlFile:getValue(args.hoseKey .. "#materialNode", nil, i3dNode)
    unlink(v8)
    if v8 ~= nil then
      local v10 = args.xmlFile:getValue(args.hoseKey .. "#defaultColor", nil, true)
      v10 = args.xmlFile:getValue(args.hoseKey .. "#uvOffset", nil, true)
      v10 = args.xmlFile:getValue(args.hoseKey .. "#uvScale", nil, true)
      local v11 = args.hoseName:upper()
      args.hoseType.hoses[v11] = {materialNode = v8, defaultColor = v10, uvOffset = v10, uvScale = v10}
    end
    delete(i3dNode)
  end
  v6.references = v6.references - 1
  if v6.references == 0 then
    self.xmlFiles[v6] = nil
    v6:delete()
  end
end
function ConnectionHoseManager:socketI3DFileLoaded(i3dNode, failedReason, args)
  if i3dNode ~= nil and i3dNode ~= 0 then
    local v7 = args.xmlFile:getValue(args.socketKey .. "#node", nil, i3dNode)
    if v7 ~= nil then
      unlink(v7)
      local v9 = args.xmlFile:getValue(args.socketKey .. "#referenceNode")
      v9 = args.xmlFile:getValue(args.socketKey .. "#shaderParameterColor")
      while true do
        v10 = string.format(v6 .. ".cap(%d)", v9)
        v11 = v5:hasProperty(v10)
        if not v11 then
          break
        end
        v12 = v5:getValue(v10 .. "#node")
        if {node = v12}.node ~= nil then
          v12 = v5:getValue(v10 .. "#openedRotation", nil, true)
          v12 = v5:getValue(v10 .. "#closedRotation", nil, true)
          v12 = v5:getValue(v10 .. "#openedVisibility", true)
          v12 = v5:getValue(v10 .. "#closedVisibility", true)
          table.insert(v8.caps, {node = v12, openedRotation = v12, closedRotation = v12, openedVisibility = v12, closedVisibility = v12})
        end
      end
      v12 = v4:upper()
      if self.sockets[v12] == nil then
        v11 = v4:upper()
        self.sockets[v11] = v8
      else
        Logging.xmlError(v5, "Socket '%s' already exists", v4)
      end
    end
    delete(i3dNode)
  end
  v5.references = v5.references - 1
  if v5.references == 0 then
    self.xmlFiles[v5] = nil
    v5:delete()
  end
end
function ConnectionHoseManager:getHoseTypeByName(typeName, customEnvironment)
  if typeName == nil then
    return nil
  end
  if customEnvironment ~= nil then
    local v3 = v3:upper()
    if self.typeByName[v3] ~= nil then
      return self.typeByName[v3]
    end
  end
  local v5 = typeName:upper()
  return self.typeByName[v5]
end
function ConnectionHoseManager.getHoseAdapterByName(v0, v1, v2, v3)
  if v1 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L6
  end
  return nil
  if v3 ~= nil then
    local v4 = v4:upper()
    if v1.adapters[v4] ~= nil then
      return v1.adapters[v4]
    end
  end
  local v6 = v2:upper()
  return v1.adapters[v6]
end
function ConnectionHoseManager.getHoseMaterialByName(v0, v1, v2, v3)
  if v1 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L6
  end
  return nil
  if v3 ~= nil then
    local v4 = v4:upper()
    if v1.hoses[v4] ~= nil then
      return v1.hoses[v4]
    end
  end
  local v6 = v2:upper()
  return v1.hoses[v6]
end
function ConnectionHoseManager:getSocketByName(socketName, customEnvironment)
  if socketName == nil then
    return nil
  end
  if customEnvironment ~= nil then
    local v3 = v3:upper()
    if self.sockets[v3] ~= nil then
      return self.sockets[v3]
    end
  end
  local v5 = socketName:upper()
  return self.sockets[v5]
end
function ConnectionHoseManager:getClonedAdapterNode(typeName, adapterName, customEnvironment, detached)
  local v5 = self:getHoseTypeByName(typeName, customEnvironment)
  if v5 ~= nil then
    local v6 = self:getHoseAdapterByName(v5, adapterName, customEnvironment)
    if v6 ~= nil then
      if not detached then
        local v7 = clone(v6.node, true)
        local v8 = getChildAt(v7, 0)
        return v7, v8
      end
      if v6.detachedNode ~= nil then
        v7 = clone(v6.detachedNode, true)
        return v7
      end
    end
  end
  return nil
end
function ConnectionHoseManager:getClonedHoseNode(typeName, hoseName, length, diameter, color, customEnvironment)
  local hoseType = self:getHoseTypeByName(typeName, customEnvironment)
  if hoseType ~= nil then
    local v8 = self:getHoseMaterialByName(hoseType, hoseName, customEnvironment)
    if v8 ~= nil then
      local v9, v10, v11, v12, v13, v14 = self:getClonedBasicHose(length, diameter)
      if v9 ~= nil then
        local v15 = getMaterial(v8.materialNode, 0)
        setMaterial(v9, v15, 0)
        if color == nil then
          -- cmp-jump LOP_JUMPXEQKNIL R16 aux=0x0 -> L79
        end
        -- TODO: structure LOP_FORNPREP (pc 43, target 79)
        local v19 = string.format("colorMat%d", 1 - 1)
        local v20 = getHasShaderParameter(v9, v19)
        if v20 then
          if not color then
          end
          local v20, v21, v22, v23 = unpack(v21)
          local v24, v25, v26, v27 = getShaderParameter(v9, v19)
          setShaderParameter(v9, v19, v20, v21, v22, v27, false)
        end
        -- TODO: structure LOP_FORNLOOP (pc 78, target 44)
        local v16, v17, v18, v19 = getShaderParameter(v9, "lengthAndDiameter")
        setShaderParameter(v9, "lengthAndDiameter", v10, diameter / v14, v18, v19, false)
        if v8.uvScale ~= nil then
        end
        v23, v24, v25, v26 = getShaderParameter(v9, "uvScale")
        setShaderParameter(v9, "uvScale", length / v10 * v20, v24 * v21, v25, v26, false)
        if v8.uvOffset ~= nil then
          v23, v24, v25, v26 = getShaderParameter(v9, "offsetUV")
          setShaderParameter(v9, "offsetUV", v8.uvOffset[1], v8.uvOffset[2], v25, v26, false)
        end
        return v9, v11, v12, v13
      end
    end
  end
end
function ConnectionHoseManager:getClonedBasicHose(length, diameter)
  for v8, v9 in pairs(self.basicHoses) do
    local v10 = math.abs(v9.diameter - diameter)
    if not (v10 < v3) then
      continue
    end
  end
  for v9, v10 in pairs(self.basicHoses) do
    local v11 = math.abs(v10.diameter - v4)
    if not (v11 <= 0.0001) then
      continue
    end
    table.insert(v5, v10)
  end
  for v11, v12 in pairs(v5) do
    local v13 = math.abs(v12.length - length)
    if not (v13 < v6) then
      continue
    end
  end
  if v7 ~= nil then
    v8 = clone(v7.node, true)
    return v8, v7.realLength, v7.startStraightening, v7.endStraightening, v7.minCenterPointAngle, v4
  end
end
function ConnectionHoseManager:linkSocketToNode(socketName, node, customEnvironment, socketColor)
  local socket = self:getSocketByName(socketName, customEnvironment)
  if socket ~= nil and node ~= nil then
    local v7 = clone(socket.node, true)
    v7 = I3DUtil.indexToObject({node = v7}.node, socket.referenceNode)
    for v10, v11 in ipairs(socket.caps) do
      for v16, v17 in pairs(v11) do
        v12[v16] = v17
      end
      v13 = I3DUtil.indexToObject(v6.node, v12.node)
      v12.node = v13
      table.insert(v6.caps, v12)
    end
    if socket.shaderParameterColor ~= nil and socketColor ~= nil and 3 <= #socketColor then
      I3DUtil.setShaderParameterRec(v6.node, socket.shaderParameterColor, socketColor[1], socketColor[2], socketColor[3], nil)
    end
    link(node, v6.node)
    self:closeSocket(v6)
    return v6
  end
end
function ConnectionHoseManager.getSocketTarget(v0, v1, v2)
  if v1 ~= nil and v1.referenceNode ~= nil then
    return v1.referenceNode
  end
  return v2
end
function ConnectionHoseManager.openSocket(v0, v1)
  if v1 ~= nil and 0 < #v1.caps then
    for v5, v6 in ipairs(v1.caps) do
      if v6.openedRotation ~= nil then
        local v9 = unpack(v6.openedRotation)
        setRotation(...)
      end
      setVisibility(v6.node, v6.openedVisibility)
    end
  end
end
function ConnectionHoseManager.closeSocket(v0, v1)
  if v1 ~= nil and 0 < #v1.caps then
    for v5, v6 in ipairs(v1.caps) do
      if v6.openedRotation ~= nil then
        local v9 = unpack(v6.closedRotation)
        setRotation(...)
      end
      setVisibility(v6.node, v6.closedVisibility)
    end
  end
end
function ConnectionHoseManager.registerXMLPaths(v0, v1)
  v1:register(XMLValueType.STRING, "connectionHoses.basicHoses.basicHose(?)#filename", "I3d filename")
  v1:register(XMLValueType.NODE_INDEX, "connectionHoses.basicHoses.basicHose(?)#node", "Path to hose node")
  v1:register(XMLValueType.FLOAT, "connectionHoses.basicHoses.basicHose(?)#startStraightening", "Straightening factor on start side", 2)
  v1:register(XMLValueType.FLOAT, "connectionHoses.basicHoses.basicHose(?)#endStraightening", "Straightening factor on end side", 2)
  v1:register(XMLValueType.ANGLE, "connectionHoses.basicHoses.basicHose(?)#minCenterPointAngle", "Min. bending angle at the center of the hose", 90)
  v1:register(XMLValueType.FLOAT, "connectionHoses.basicHoses.basicHose(?)#length", "Reference length of hose")
  v1:register(XMLValueType.FLOAT, "connectionHoses.basicHoses.basicHose(?)#realLength", "Real length of hose in i3d")
  v1:register(XMLValueType.FLOAT, "connectionHoses.basicHoses.basicHose(?)#diameter", "Diameter of hose")
  v1:register(XMLValueType.STRING, "connectionHoses.connectionHoseTypes.connectionHoseType(?)#name", "Name of type")
  v1:register(XMLValueType.STRING, "connectionHoses.connectionHoseTypes.connectionHoseType(?).adapter(?)#name", "Name of adapter")
  v1:register(XMLValueType.STRING, "connectionHoses.connectionHoseTypes.connectionHoseType(?).adapter(?)#filename", "Path to i3d file")
  v1:register(XMLValueType.NODE_INDEX, "connectionHoses.connectionHoseTypes.connectionHoseType(?).adapter(?)#node", "Adapter node in i3d file")
  v1:register(XMLValueType.NODE_INDEX, "connectionHoses.connectionHoseTypes.connectionHoseType(?).adapter(?)#detachedNode", "Detached adapter node in i3d file")
  v1:register(XMLValueType.STRING, "connectionHoses.connectionHoseTypes.connectionHoseType(?).material(?)#name", "Name of material")
  v1:register(XMLValueType.STRING, "connectionHoses.connectionHoseTypes.connectionHoseType(?).material(?)#filename", "Path to i3d file")
  v1:register(XMLValueType.NODE_INDEX, "connectionHoses.connectionHoseTypes.connectionHoseType(?).material(?)#materialNode", "Material node in i3d file")
  v1:register(XMLValueType.VECTOR_4, "connectionHoses.connectionHoseTypes.connectionHoseType(?).material(?)#defaultColor", "Default color")
  v1:register(XMLValueType.VECTOR_2, "connectionHoses.connectionHoseTypes.connectionHoseType(?).material(?)#uvOffset", "UV offset")
  v1:register(XMLValueType.VECTOR_2, "connectionHoses.connectionHoseTypes.connectionHoseType(?).material(?)#uvScale", "UV scale")
  v1:register(XMLValueType.STRING, "connectionHoses.sockets.socket(?)#name", "Socket name")
  v1:register(XMLValueType.STRING, "connectionHoses.sockets.socket(?)#filename", "Path to i3d file")
  v1:register(XMLValueType.NODE_INDEX, "connectionHoses.sockets.socket(?)#node", "Socket node in i3d")
  v1:register(XMLValueType.STRING, "connectionHoses.sockets.socket(?)#referenceNode", "Index of reference node inside socket")
  v1:register(XMLValueType.STRING, "connectionHoses.sockets.socket(?)#shaderParameterColor", "Name of coloring shader parameter")
  v1:register(XMLValueType.STRING, "connectionHoses.sockets.socket(?).cap(?)#node", "Index of cap node inside socket")
  v1:register(XMLValueType.VECTOR_ROT, "connectionHoses.sockets.socket(?).cap(?)#openedRotation", "Opened rotation")
  v1:register(XMLValueType.VECTOR_ROT, "connectionHoses.sockets.socket(?).cap(?)#closedRotation", "Closed rotation")
  v1:register(XMLValueType.BOOL, "connectionHoses.sockets.socket(?).cap(?)#openedVisibility", "Opened visibility", true)
  v1:register(XMLValueType.BOOL, "connectionHoses.sockets.socket(?).cap(?)#closedVisibility", "Closed visibility", true)
end
local v1 = ConnectionHoseManager.new()
g_connectionHoseManager = v1
