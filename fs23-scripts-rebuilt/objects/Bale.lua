-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Bale = {INTERACTION_RADIUS = 3}
source("dataS/scripts/events/BaleOpenEvent.lua")
local Bale_mt = Class(Bale, MountableObject)
InitStaticObjectClass(Bale, "Bale", ObjectIds.OBJECT_BALE)
v1:addInitSchemaFunction(function()
  Bale.registerSavegameXMLPaths(ItemSystem.xmlSchemaSavegame, "items.item(?)")
end)
function Bale:registerSavegameXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#filename", "Path to bale xml file")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "#position", "Bale position")
  self:register(XMLValueType.VECTOR_ROT, v1 .. "#rotation", "Bale rotation")
  self:register(XMLValueType.FLOAT, v1 .. "#fillLevel", "Current bale fill level")
  self:register(XMLValueType.STRING, v1 .. "#fillType", "Current bale fill type")
  self:register(XMLValueType.INT, v1 .. "#farmId", "Id of owner farm")
  self:register(XMLValueType.STRING, v1 .. ".textures#wrapDiffuse", "Current wrap diffuse file")
  self:register(XMLValueType.STRING, v1 .. ".textures#wrapNormal", "Current wrap normal file")
  self:register(XMLValueType.BOOL, v1 .. ".fermentation#isFermenting", "Bale is fermenting")
  self:register(XMLValueType.FLOAT, v1 .. ".fermentation#time", "Current fermentation time")
  self:register(XMLValueType.FLOAT, v1 .. "#wrappingState", "Current wrapping state")
  self:register(XMLValueType.VECTOR_4, v1 .. "#wrappingColor", "Wrapping color")
  self:register(XMLValueType.FLOAT, v1 .. "#valueScale", "Bale value scale")
  self:register(XMLValueType.BOOL, v1 .. "#isMissionBale", "Bale was produced in mission context", false)
end
function Bale.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.forcedClipDistance = 300
  registerObjectClassName(v3, "Bale")
  v3.fillType = FillType.STRAW
  v3.fillLevel = 0
  v3.supportsWrapping = false
  v3.wrappingState = 0
  v3.wrappingColor = {1, 1, 1, 1}
  v3.baleValueScale = 1
  v3.defaultMass = 0.25
  v3.isFermenting = false
  v3.fermentingPercentage = 0
  v3.canBeSold = true
  v3.allowPickup = true
  v3.isMissionBale = false
  local v4 = BaleActivatable.new(v3)
  v3.activatable = v4
  v4 = v3:getNextDirtyFlag()
  v3.fillTypeDirtyFlag = v4
  v4 = v3:getNextDirtyFlag()
  v3.fillLevelDirtyFlag = v4
  v4 = v3:getNextDirtyFlag()
  v3.texturesDirtyFlag = v4
  v4 = v3:getNextDirtyFlag()
  v3.wrapStateDirtyFlag = v4
  v4 = v3:getNextDirtyFlag()
  v3.wrapColorDirtyFlag = v4
  v4 = v3:getNextDirtyFlag()
  v3.fermentingDirtyFlag = v4
  v3.obstacleNodeId = nil
  v3.sharedLoadRequestId = nil
  v4:addLimitedObject(SlotSystem.LIMITED_OBJECT_BALE, v3)
  return v3
end
function Bale:delete()
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  v1:removeActivatable(self.activatable)
  if self.isFermenting then
    v1:removeFermentation(self)
  end
  self:setBaleAIObstacle(false)
  v1:removeLimitedObject(SlotSystem.LIMITED_OBJECT_BALE, self)
  unregisterObjectClassName(self)
  v1:removeItemToSave(self)
  local v2 = v2:superClass()
  v2.delete(self)
end
function Bale:readUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      v4 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
      self:setFillType(v4)
    end
    v4 = streamReadBool(streamId)
    if v4 then
      local v6 = streamReadFloat32(streamId)
      self:setFillLevel(...)
    end
    v4 = streamReadBool(streamId)
    if v4 then
      v4 = streamReadBool(streamId)
      if v4 then
        local v5 = streamReadString(streamId)
        v4 = NetworkUtil.convertFromNetworkFilename(...)
        self:setWrapTextures(v4, nil)
      end
      v4 = streamReadBool(streamId)
      if v4 then
        v5 = streamReadString(streamId)
        v4 = NetworkUtil.convertFromNetworkFilename(...)
        self:setWrapTextures(nil, v4)
      end
    end
    v4 = streamReadBool(streamId)
    if v4 then
      local v7 = streamReadUInt8(streamId)
      self:setWrappingState(v7 / 255, false)
    end
    v4 = streamReadBool(streamId)
    if v4 then
      v4 = streamReadFloat32(streamId)
      v5 = streamReadFloat32(streamId)
      v6 = streamReadFloat32(streamId)
      v7 = streamReadFloat32(streamId)
      self:setColor(v4, v5, v6, v7)
    end
    v4 = streamReadBool(streamId)
    if v4 then
      v4 = streamReadBool(streamId)
      self.isFermenting = v4
      v5 = streamReadUInt8(streamId)
      self.fermentingPercentage = v5 / 255
    end
  end
  v5 = v5:superClass()
  v5.readUpdateStream(self, streamId, timestamp, connection)
end
function Bale:writeUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v7 = bitAND(dirtyMask, self.fillTypeDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      streamWriteUIntN(streamId, self.fillType, FillTypeManager.SEND_NUM_BITS)
    end
    v7 = bitAND(dirtyMask, self.fillLevelDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      streamWriteFloat32(streamId, self.fillLevel)
    end
    v7 = bitAND(dirtyMask, self.texturesDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      if self.wrapDiffuse == nil then
      end
      v4 = v4(v5, true)
      if v4 then
        local v6 = NetworkUtil.convertToNetworkFilename(self.wrapDiffuse)
        streamWriteString(...)
      end
      if self.wrapNormal == nil then
      end
      v4 = v4(v5, true)
      if v4 then
        v6 = NetworkUtil.convertToNetworkFilename(self.wrapNormal)
        streamWriteString(...)
      end
    end
    v7 = bitAND(dirtyMask, self.wrapStateDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      v6 = MathUtil.clamp(self.wrappingState * 255, 0, 255)
      streamWriteUInt8(...)
    end
    v7 = bitAND(dirtyMask, self.wrapColorDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      streamWriteFloat32(streamId, self.wrappingColor[1])
      streamWriteFloat32(streamId, self.wrappingColor[2])
      streamWriteFloat32(streamId, self.wrappingColor[3])
      streamWriteFloat32(streamId, self.wrappingColor[4])
    end
    v7 = bitAND(dirtyMask, self.fermentingDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      streamWriteBool(streamId, self.isFermenting)
      v6 = MathUtil.clamp(self.fermentingPercentage * 255, 0, 255)
      streamWriteUInt8(...)
    end
  end
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, streamId, connection, dirtyMask)
end
function Bale:readStream(streamId, connection)
  local v4 = streamReadString(streamId)
  local v3 = NetworkUtil.convertFromNetworkFilename(...)
  if self.nodeId == 0 then
    self:loadFromConfigXML(v3)
  end
  v4 = streamReadFloat32(streamId)
  self:setFillLevel(v4)
  local fillType = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
  self:setFillType(fillType)
  local v6 = streamReadBool(streamId)
  if v6 then
    local v7 = streamReadString(streamId)
    v6 = NetworkUtil.convertFromNetworkFilename(...)
    self:setWrapTextures(v6, nil)
  end
  v6 = streamReadBool(streamId)
  if v6 then
    v7 = streamReadString(streamId)
    v6 = NetworkUtil.convertFromNetworkFilename(...)
    self:setWrapTextures(nil, v6)
  end
  v7 = v7:superClass()
  v7.readStream(self, streamId, connection)
  v6:addItemToSave(self)
  v6 = streamReadFloat32(streamId)
  self.baleValueScale = v6
  local v9 = streamReadUInt8(streamId)
  self:setWrappingState(v9 / 255, false)
  v6 = streamReadFloat32(streamId)
  v7 = streamReadFloat32(streamId)
  local v8 = streamReadFloat32(streamId)
  v9 = streamReadFloat32(streamId)
  self:setColor(v6, v7, v8, v9)
  local v10 = streamReadBool(streamId)
  self.isFermenting = v10
  if self.isFermenting then
    local v11 = streamReadUInt8(streamId)
    self.fermentingPercentage = v11 / 255
    return
  end
  self.fermentingPercentage = 0
end
function Bale:writeStream(streamId, connection)
  local v5 = NetworkUtil.convertToNetworkFilename(self.xmlFilename)
  streamWriteString(...)
  streamWriteFloat32(streamId, self.fillLevel)
  streamWriteUIntN(streamId, self.fillType, FillTypeManager.SEND_NUM_BITS)
  if self.wrapDiffuse == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    v5 = NetworkUtil.convertToNetworkFilename(self.wrapDiffuse)
    streamWriteString(...)
  end
  if self.wrapNormal == nil then
  end
  v3 = v3(v4, true)
  if v3 then
    v5 = NetworkUtil.convertToNetworkFilename(self.wrapNormal)
    streamWriteString(...)
  end
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  streamWriteFloat32(streamId, self.baleValueScale)
  v5 = MathUtil.clamp(self.wrappingState * 255, 0, 255)
  streamWriteUInt8(...)
  streamWriteFloat32(streamId, self.wrappingColor[1])
  streamWriteFloat32(streamId, self.wrappingColor[2])
  streamWriteFloat32(streamId, self.wrappingColor[3])
  streamWriteFloat32(streamId, self.wrappingColor[4])
  v3 = streamWriteBool(streamId, self.isFermenting)
  if v3 then
    v5 = MathUtil.clamp(self.fermentingPercentage * 255, 0, 255)
    streamWriteUInt8(...)
  end
end
function Bale:mount(object, node, x, y, z, rx, ry, rz)
  local v10 = v10:superClass()
  v10.mount(self, object, node, x, y, z, rx, ry, rz)
  v9:removeItemToSave(self)
  self:setBaleAIObstacle(false)
end
function Bale:unmount()
  local v2 = v2:superClass()
  local v1 = v2.unmount(self)
  if v1 then
    v1:addItemToSave(self)
    self:setReducedComponentMass(false)
    self:setBaleAIObstacle(true)
    return true
  end
  return false
end
function Bale:mountKinematic(object, node, x, y, z, rx, ry, rz)
  local v10 = v10:superClass()
  v10.mountKinematic(self, object, node, x, y, z, rx, ry, rz)
  v9:removeItemToSave(self)
  self:setBaleAIObstacle(false)
end
function Bale:unmountKinematic()
  local v2 = v2:superClass()
  local v1 = v2.unmountKinematic(self)
  if v1 then
    v1:addItemToSave(self)
    self:setReducedComponentMass(false)
    self:setBaleAIObstacle(true)
    return true
  end
  return false
end
function Bale:mountDynamic(object, objectActorId, jointNode, mountType, forceAcceleration)
  local v7 = v7:superClass()
  local v6 = v7.mountDynamic(self, object, objectActorId, jointNode, mountType, forceAcceleration)
  if not v6 then
    return false
  end
  self:setBaleAIObstacle(false)
  return true
end
function Bale:unmountDynamic(isDelete)
  local v3 = v3:superClass()
  v3.unmountDynamic(self, isDelete)
  self:setReducedComponentMass(false)
  self:setBaleAIObstacle(true)
end
function Bale:setBaleAIObstacle(isActive)
  if isActive and self.obstacleNodeId == nil then
    v2:addObstacle(self.nodeId, nil, nil, nil, nil, nil, nil, nil)
    self.obstacleNodeId = self.nodeId
    return
  end
  if not isActive and self.obstacleNodeId ~= nil then
    v2:removeObstacle(self.obstacleNodeId)
    self.obstacleNodeId = nil
  end
end
function Bale:createNode(i3dFilename)
  self.i3dFilename = i3dFilename
  local v2, v3 = v2:loadSharedI3DFile(i3dFilename, false, false)
  self.sharedLoadRequestId = v3
  local v4 = getChildAt(v2, 0)
  local v6 = getRootNode()
  link(v6, v4)
  delete(v2)
  self:setNodeId(v4)
end
function Bale:loadFromConfigXML(xmlFilename, x, y, z, rx, ry, rz)
  if xmlFilename ~= nil then
    local v8 = fileExists(xmlFilename)
    -- if v8 then goto L9 end
  end
  return false
  v8 = XMLFile.load("TempBale", xmlFilename, BaleManager.baleXMLSchema)
  self.xmlFilename = xmlFilename
  local v9, v10 = Utils.getModNameAndBaseDirectory(self.xmlFilename)
  self.customEnvironment = v9
  self.baseDirectory = v10
  v9 = v8:getValue("bale.filename")
  self.i3dFilename = v9
  if self.i3dFilename ~= nil then
    v9 = Utils.getFilename(self.i3dFilename, self.baseDirectory)
    self.i3dFilename = v9
    self:createNode(self.i3dFilename)
    if x ~= nil and y ~= nil and z ~= nil and ry ~= nil and ry ~= nil and rz ~= nil then
      setTranslation(self.nodeId, x, y, z)
      setRotation(self.nodeId, rx, ry, rz)
    end
    v9 = self:loadBaleAttributesFromXML(v8)
    if not v9 then
      return false
    end
  end
  v8:delete()
  v9:addItemToSave(self)
  self:setBaleAIObstacle(true)
  return true
end
function Bale:loadBaleAttributesFromXML(xmlFile)
  local triggerId = xmlFile:getValue("bale.mountableObject#triggerNode", nil, self.nodeId)
  local v3 = xmlFile:getValue("bale.mountableObject#forceAcceleration", 4)
  local v4 = xmlFile:getValue("bale.mountableObject#forceLimitScale", 1)
  local v5 = xmlFile:getValue("bale.mountableObject#axisFreeY", false)
  local v6 = xmlFile:getValue("bale.mountableObject#axisFreeX", false)
  self:setMountableObjectAttributes(triggerId, v3, v4, v5, v6)
  self.fillTypes = {}
  Bale.loadFillTypesFromXML(self.fillTypes, xmlFile, self.baseDirectory)
  local v7 = xmlFile:getValue("bale.size#isRoundbale", true)
  self.isRoundbale = v7
  local v8 = xmlFile:getValue("bale.size#width", 0)
  v7 = MathUtil.round(v8, 2)
  self.width = v7
  v8 = xmlFile:getValue("bale.size#height", 0)
  v7 = MathUtil.round(v8, 2)
  self.height = v7
  v8 = xmlFile:getValue("bale.size#length", 0)
  v7 = MathUtil.round(v8, 2)
  self.length = v7
  v8 = xmlFile:getValue("bale.size#diameter", 0)
  v7 = MathUtil.round(v8, 2)
  self.diameter = v7
  self.centerOffsetX = 0
  self.centerOffsetY = 0
  self.centerOffsetZ = 0
  v7 = xmlFile:getValue("bale.uvId", "DEFAULT")
  self.uvId = v7
  v7, v8 = Bale.loadVisualMeshesFromXML(self.nodeId, xmlFile, self.baseDirectory)
  self.meshes = v7
  self.tensionBeltMeshes = v8
  return true
end
function Bale:getBaleMatchesSize(diameter, width, height, length)
  if self.isRoundbale then
    if diameter == self.diameter and width ~= self.width then
    end
    return v5
  end
  if width == self.width and height == self.height and length ~= self.length then
  end
  return v5
end
function Bale:getSupportsWrapping()
  return self.supportsWrapping
end
function Bale:loadFromXMLFile(xmlFile, key, resetVehicles)
  local v4, v5, v6 = xmlFile:getValue(key .. "#position")
  local v7, v8, v9 = xmlFile:getValue(key .. "#rotation")
  if v4 ~= nil and v5 ~= nil and v6 ~= nil and v7 ~= nil and v8 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x80000000 -> L26
  end
  return false
  local xmlFilename = xmlFile:getValue(key .. "#filename")
  if xmlFilename == nil then
    return false
  end
  local v11 = NetworkUtil.convertFromNetworkFilename(xmlFilename)
  v11 = fileExists(v11)
  if not v11 then
    return false
  end
  v11 = self:loadFromConfigXML(xmlFilename, v4, v5, v6, v7, v8, v9)
  if not v11 then
    return false
  end
  Bale.loadBaleAttributesFromXMLFile({}, xmlFile, key, resetVehicles)
  self:applyBaleAttributes({})
  return true
end
function Bale:loadBaleAttributesFromXMLFile(v1, v2, v3)
  local v5 = v1:getValue(v2 .. "#filename")
  local v4 = NetworkUtil.convertFromNetworkFilename(...)
  self.xmlFilename = v4
  v4 = v1:getValue(v2 .. "#farmId", AccessHandler.EVERYONE)
  self.farmId = v4
  v4 = v1:getValue(v2 .. "#fillLevel")
  self.fillLevel = v4
  v4 = v1:getValue(v2 .. "#fillType")
  self.fillTypeName = v4
  v4 = v4:getFillTypeIndexByName(self.fillTypeName)
  self.fillType = v4
  v4 = v1:getValue(v2 .. ".textures#wrapDiffuse")
  if v4 ~= nil then
    v5 = NetworkUtil.convertFromNetworkFilename(v4)
    self.wrapDiffuse = v5
  end
  v5 = v1:getValue(v2 .. ".textures#wrapNormal")
  if v5 ~= nil then
    local v6 = NetworkUtil.convertFromNetworkFilename(v5)
    self.wrapNormal = v6
  end
  v6 = v1:getValue(v2 .. ".fermentation#isFermenting", false)
  self.isFermenting = v6
  v6 = v1:getValue(v2 .. ".fermentation#time", 0)
  self.fermentationTime = v6
  v6 = v1:getValue(v2 .. "#wrappingState", 0)
  self.wrappingState = v6
  v6 = v1:getValue(v2 .. "#wrappingColor", {1, 1, 1, 1}, true)
  self.wrappingColor = v6
  v6 = v1:getValue(v2 .. "#valueScale", 1)
  self.baleValueScale = v6
  v6 = v1:getValue(v2 .. "#isMissionBale", false)
  self.isMissionBale = v6
  return true
end
function Bale:getBaleAttributes()
  local v2 = self:getOwnerFarmId()
  if self.isFermenting then
    local v3 = v3:getFermentationTime(self)
  end
  return v1
end
function Bale:saveBaleAttributesToXMLFile(v1, v2)
  local v7 = NetworkUtil.convertToNetworkFilename(self.xmlFilename)
  local v6 = HTMLUtil.encodeToHTML(...)
  v1:setValue(...)
  v1:setValue(v2 .. "#valueScale", self.baleValueScale)
  v1:setValue(v2 .. "#fillLevel", self.fillLevel)
  v6 = v6:getFillTypeNameByIndex(self.fillType)
  v1:setValue(...)
  v1:setValue(v2 .. "#farmId", self.farmId)
  v1:setValue(v2 .. "#isMissionBale", self.isMissionBale)
  v1:setValue(v2 .. "#wrappingState", self.wrappingState)
  v1:setValue(v2 .. "#wrappingColor", self.wrappingColor[1], self.wrappingColor[2], self.wrappingColor[3], self.wrappingColor[4])
  if self.wrapDiffuse ~= nil then
    v7 = NetworkUtil.convertToNetworkFilename(self.wrapDiffuse)
    v6 = HTMLUtil.encodeToHTML(...)
    v1:setValue(...)
  end
  if self.wrapNormal ~= nil then
    v7 = NetworkUtil.convertToNetworkFilename(self.wrapNormal)
    v6 = HTMLUtil.encodeToHTML(...)
    v1:setValue(...)
  end
  if self.isFermenting then
    v1:setValue(v2 .. ".fermentation#isFermenting", true)
    v1:setValue(v2 .. ".fermentation#time", self.fermentationTime)
  end
end
function Bale:applyBaleAttributes(attributes)
  if not attributes.farmId then
  end
  self:setOwnerFarmId(v4)
  if not attributes.fillLevel then
  end
  self:setFillLevel(v4)
  if attributes.fillTypeName ~= nil then
    local v2 = v2:getFillTypeIndexByName(attributes.fillTypeName)
    if not v2 then
    end
    self:setFillType(v5)
  elseif attributes.fillType ~= nil then
    self:setFillType(attributes.fillType)
  end
  self:setWrapTextures(attributes.wrapDiffuse, attributes.wrapNormal)
  self:setWrappingState(attributes.wrappingState, false)
  local v4 = unpack(attributes.wrappingColor)
  self:setColor(...)
  if not attributes.baleValueScale then
  end
  self.baleValueScale = v2
  v2 = Utils.getNoNil(attributes.isMissionBale, self.isMissionBale)
  self.isMissionBale = v2
  if self.isServer and attributes.isFermenting then
    v2 = self:getFillTypeInfo(self.fillType)
    if v2 ~= nil and v2.fermenting ~= nil then
      if self.isMissionBale then
      end
      v4:registerFermentation(self, attributes.fermentationTime, v3)
      self.isFermenting = true
      self:raiseDirtyFlags(self.fermentingDirtyFlag)
    end
  end
  return true
end
function Bale:saveToXMLFile(xmlFile, key)
  local v3, v4, v5 = getTranslation(self.nodeId)
  local v6, v7, v8 = getRotation(self.nodeId)
  local v13 = NetworkUtil.convertToNetworkFilename(self.xmlFilename)
  local v12 = HTMLUtil.encodeToHTML(...)
  xmlFile:setValue(...)
  xmlFile:setValue(key .. "#position", v3, v4, v5)
  xmlFile:setValue(key .. "#rotation", v6, v7, v8)
  xmlFile:setValue(key .. "#valueScale", self.baleValueScale)
  xmlFile:setValue(key .. "#fillLevel", self.fillLevel)
  v12 = v12:getFillTypeNameByIndex(self.fillType)
  xmlFile:setValue(...)
  v12 = self:getOwnerFarmId()
  xmlFile:setValue(...)
  xmlFile:setValue(key .. "#isMissionBale", self.isMissionBale)
  xmlFile:setValue(key .. "#wrappingState", self.wrappingState)
  xmlFile:setValue(key .. "#wrappingColor", self.wrappingColor[1], self.wrappingColor[2], self.wrappingColor[3], self.wrappingColor[4])
  if self.wrapDiffuse ~= nil then
    v13 = NetworkUtil.convertToNetworkFilename(self.wrapDiffuse)
    v12 = HTMLUtil.encodeToHTML(...)
    xmlFile:setValue(...)
  end
  if self.wrapNormal ~= nil then
    v13 = NetworkUtil.convertToNetworkFilename(self.wrapNormal)
    v12 = HTMLUtil.encodeToHTML(...)
    xmlFile:setValue(...)
  end
  if self.isFermenting then
    xmlFile:setValue(key .. ".fermentation#isFermenting", true)
    v12 = v12:getFermentationTime(self)
    xmlFile:setValue(...)
  end
end
function Bale:getNeedsSaving()
  local attributes, v2, v3 = getTranslation(self.nodeId)
  if -90 >= v2 then
  end
  return true
end
function Bale.getAutoLoadIsSupported(v0)
  return true
end
function Bale:getAutoLoadIsAllowed()
  return self:getAllowPickup()
end
function Bale:getAutoLoadSize()
  if self.isRoundbale then
    -- if v0.diameter then goto L10 end
  end
  if self.isRoundbale then
    -- if v0.diameter then goto L18 end
  end
  return attributes, v2, self.length
end
function Bale:autoLoad(attributes, v2, v3, v4, v5, v6)
  if self.isRoundbale then
    -- if v0.diameter * 0.5 then goto L12 end
  end
  if self.isRoundbale then
    -- if math.pi * 0.5 then goto L22 end
  end
  if self.dynamicMountType == MountableObject.MOUNT_TYPE_KINEMATIC then
    self:unmountKinematic()
  end
  self:mountKinematic(attributes, v2, v7, v8, v9, 0, v10, 0)
  return true
end
function Bale:getAutoLoadBoundingBox()
  local attributes, v2, v3 = getWorldTranslation(self.nodeId)
  local v4, v5, v6 = localDirectionToWorld(self.nodeId, 0, 0, 1)
  local v7, v8, v9 = localDirectionToWorld(self.nodeId, 0, 1, 0)
  if self.isRoundbale then
    -- if v0.diameter * 0.5 then goto L34 end
  end
  if self.isRoundbale then
    -- if v0.diameter * 0.5 then goto L44 end
  end
  return attributes, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, self.length * 0.5
end
function Bale:getValue()
  local attributes = attributes:getPricePerLiter(self.fillType)
  return self.fillLevel * attributes * self.baleValueScale
end
function Bale:getMass()
  local v2 = entityExists(self.nodeId or 0)
  if v2 then
    local attributes = getMass(self.nodeId)
    -- if v1 then goto L14 end
  end
  return 0
end
function Bale:getDefaultMass()
  return self.defaultMass
end
function Bale:getFillType()
  return self.fillType
end
function Bale:setReducedComponentMass(state)
  if state then
    setMass(self.nodeId, 0.1)
    return
  end
  setMass(self.nodeId, self.defaultMass)
end
function Bale:getAllowComponentMassReduction()
  if 0.1 >= self.defaultMass then
  end
  return true
end
function Bale:setFillType(fillTypeIndex, fillBale)
  Bale.setFillTypeTextures(self.nodeId, self.fillTypes, fillTypeIndex)
  self.fillType = fillTypeIndex
  self.supportsWrapping = false
  local fillTypeInfo = self:getFillTypeInfo(self.fillType)
  if fillTypeInfo ~= nil then
    self.supportsWrapping = fillTypeInfo.supportsWrapping
    setMass(self.nodeId, fillTypeInfo.mass)
    self.defaultMass = fillTypeInfo.mass
    if self.isServer then
      if fillTypeInfo.forceAcceleration ~= nil then
        self:setMountableObjectAttributes(nil, fillTypeInfo.forceAcceleration, self.dynamicMountForceLimitScale, self.dynamicMountSingleAxisFreeY, self.dynamicMountSingleAxisFreeX)
      end
      if fillTypeInfo.fermenting ~= nil and not fillTypeInfo.fermenting.requiresWrapping then
        if self.isFermenting then
          v4:removeFermentation(self)
        end
        v5:registerFermentation(self, 0, fillTypeInfo.fermenting.time * 86400000)
        self.isFermenting = true
        self:raiseDirtyFlags(self.fermentingDirtyFlag)
      end
    end
    if fillBale == true then
      self:setFillLevel(fillTypeInfo.capacity)
    end
  end
  if self.wrappingState == 0 then
  end
  v4(v5, v6, true)
  if self.isServer then
    self:raiseDirtyFlags(self.fillTypeDirtyFlag)
  end
end
function Bale:getCapacity()
  local fillTypeInfo = self:getFillTypeInfo(self.fillType)
  if fillTypeInfo ~= nil then
    return fillTypeInfo.capacity
  end
  return 0
end
function Bale:getFillLevel()
  return self.fillLevel
end
function Bale:setFillLevel(fillLevel)
  self.fillLevel = fillLevel
  if self.isServer then
    self:raiseDirtyFlags(self.fillLevelDirtyFlag)
  end
end
function Bale:getFillTypeInfo(fillTypeIndex)
  -- TODO: structure LOP_FORNPREP (pc 5, target 20)
  if self.fillTypes[1].fillTypeIndex == self.fillType then
    return self.fillTypes[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 19, target 6)
  return nil
end
function Bale:setCanBeSold(canBeSold)
  self.canBeSold = canBeSold
end
function Bale:getCanBeSold()
  return self.canBeSold
end
function Bale:setWrappingState(wrappingState, updateFermentation)
  if self.isServer and self.wrappingState ~= wrappingState then
    self:raiseDirtyFlags(self.wrapStateDirtyFlag)
  end
  self.wrappingState = wrappingState
  -- TODO: structure LOP_FORNPREP (pc 19, target 51)
  if not self.meshes[1].supportsWrapping then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000006 -> L31
  end
  setVisibility(v6.node, v6.fillTypeVisibility)
  if v6.fillTypeVisibility then
    setShaderParameter(v6.node, "wrappingState", self.wrappingState, 0, 0, 0, false)
  end
  -- TODO: structure LOP_FORNLOOP (pc 50, target 20)
  if self.isServer and updateFermentation ~= false and 1 <= self.wrappingState then
    local fillTypeInfo = self:getFillTypeInfo(self.fillType)
    if fillTypeInfo ~= nil and fillTypeInfo.fermenting ~= nil and fillTypeInfo.fermenting.requiresWrapping and not self.isFermenting then
      if self.isMissionBale then
      end
      v5:registerFermentation(self, 0, v4)
      self.isFermenting = true
      self:raiseDirtyFlags(self.fermentingDirtyFlag)
    end
  end
  if 0 < wrappingState then
    fillTypeInfo:addActivatable(self.activatable)
    return
  end
  fillTypeInfo:removeActivatable(self.activatable)
end
function Bale:setWrapTextures(diffuse, normal)
  if not diffuse then
  end
  self.wrapDiffuse = v3
  if not normal then
  end
  self.wrapNormal = v3
  -- TODO: structure LOP_FORNPREP (pc 17, target 122)
  local v7 = getMaterial(self.meshes[1].node, 0)
  if self.wrapDiffuse ~= nil then
    local v8 = textureFileExists(self.wrapDiffuse)
    if v8 then
      v8 = setMaterialCustomMapFromFile(v7, "wrapDiffuseMap", self.wrapDiffuse, false, true, false)
    else
      Logging.warning("Unknown bale wrapping texture '%s'. Using default texture.", self.wrapDiffuse)
    end
  end
  if self.wrapNormal ~= nil then
    v8 = textureFileExists(self.wrapNormal)
    if v8 then
      v8 = setMaterialCustomMapFromFile(v7, "wrapNormalMap", self.wrapNormal, false, false, false)
    else
      Logging.warning("Unknown bale wrapping texture '%s'. Using default texture.", self.wrapNormal)
    end
  end
  setMaterial(v6.node, v7, 0)
  setShaderParameter(v6.node, "wrappingState", self.wrappingState, 0, 0, 0, false)
  setShaderParameter(v6.node, "colorScale", self.wrappingColor[1], self.wrappingColor[2], self.wrappingColor[3], self.wrappingColor[4], false)
  -- TODO: structure LOP_FORNLOOP (pc 121, target 18)
  if self.isServer then
    if diffuse == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L134
    end
    self:raiseDirtyFlags(self.texturesDirtyFlag)
  end
end
function Bale:setColor(r, g, b, a)
  if (r or 1) == self.wrappingColor[1] and (g or 1) == self.wrappingColor[2] and (b or 1) == self.wrappingColor[3] then
    -- if (v4 or 1) == v0.wrappingColor[4] then goto L72 end
  end
  if self.isServer then
    self:raiseDirtyFlags(self.wrapColorDirtyFlag)
  end
  self.wrappingColor[1] = r
  self.wrappingColor[2] = g
  self.wrappingColor[3] = b
  self.wrappingColor[4] = a
  -- TODO: structure LOP_FORNPREP (pc 49, target 72)
  local v9 = getHasShaderParameter(self.meshes[1].node, "colorScale")
  if v9 then
    setShaderParameter(self.meshes[1].node, "colorScale", r, g, b, a, false)
  end
  -- TODO: structure LOP_FORNLOOP (pc 71, target 50)
end
function Bale:setIsMissionBale(state)
  self.isMissionBale = state
end
function Bale:getMeshNodes()
  return self.tensionBeltMeshes
end
function Bale.getSupportsTensionBelts(v0)
  return true
end
function Bale:getTensionBeltNodeId()
  return self.nodeId
end
function Bale.getBaleSupportsBaleLoader(v0)
  return true
end
function Bale:getAllowPickup()
  return self.allowPickup
end
function Bale:getAdditionalMountingDistance()
  if self.isRoundbale then
    return 0
  end
  return self.height * 0.5
end
function Bale:getIsFermenting()
  return self.isFermenting
end
function Bale:getFermentingPercentage()
  if self.isFermenting then
    return self.fermentingPercentage
  end
  return 0
end
function Bale:onFermentationUpdate(percentage)
  self.fermentingPercentage = percentage
  self:raiseDirtyFlags(self.fermentingDirtyFlag)
end
function Bale:onFermentationEnd()
  if self.isServer and self.isFermenting then
    local fillTypeInfo = self:getFillTypeInfo(self.fillType)
    if fillTypeInfo ~= nil and fillTypeInfo.fermenting ~= nil then
      self:setFillType(fillTypeInfo.fermenting.outputFillTypeIndex)
    end
    self.isFermenting = false
    self:raiseDirtyFlags(self.fermentingDirtyFlag)
  end
end
function Bale:getCanBeOpened()
  if self.wrappingState <= 0 then
    return false
  end
  if self.isFermenting then
    return false
  end
  if self.dynamicMountType ~= MountableObject.MOUNT_TYPE_NONE then
    return false
  end
  return true
end
function Bale.getInteractionPosition(v0)
  if not g_currentMission.controlPlayer then
    return
  end
  return getWorldTranslation(g_currentMission.player.rootNode)
end
function Bale:getCanInteract()
  local attributes = attributes:canPlayerAccess(self)
  if not attributes then
    return false
  end
  local attributes, v2, v3 = self:getInteractionPosition()
  if attributes ~= nil then
    local v4, v5, v6 = getWorldTranslation(self.nodeId)
    local v7 = MathUtil.vector3Length(v4 - attributes, v5 - v2, v6 - v3)
    if v7 > Bale.INTERACTION_RADIUS then
    end
    return true
  end
  return false
end
function Bale:open()
  self:setWrappingState(0)
end
function Bale:resetDetailVisibilityCut()
  -- TODO: structure LOP_FORNPREP (pc 5, target 28)
  local v5 = getHasShaderParameter(self.meshes[1].node, "visibilityXZ")
  if v5 then
    setShaderParameter(self.meshes[1].node, "visibilityXZ", 5, -5, 5, -5, false)
  end
  -- TODO: structure LOP_FORNLOOP (pc 27, target 6)
end
function Bale:setDetailVisibilityCutNode(node, axis, direction)
  -- TODO: structure LOP_FORNPREP (pc 5, target 21)
  Bale.setBaleMeshVisibilityCut(self.meshes[1].node, node, axis, direction, false)
  -- TODO: structure LOP_FORNLOOP (pc 20, target 6)
end
function Bale.setBaleMeshVisibilityCut(baleMesh, node, axis, direction, recursively)
  local v5 = getHasShaderParameter(baleMesh, "visibilityXZ")
  if v5 then
    local v5, v6, v7, v8 = getShaderParameter(baleMesh, "visibilityXZ")
    local v9, v10, v11 = localToLocal(node, baleMesh, 0, 0, 0)
    if axis == 1 then
      if 0 < direction then
        -- goto L34  (LOP_JUMP +8)
      end
    elseif 0 < direction then
    else
    end
    setShaderParameter(baleMesh, "visibilityXZ", v5, v6, v7, v8, false)
  end
  if recursively then
    v8 = getNumOfChildren(baleMesh)
    -- TODO: structure LOP_FORNPREP (pc 52, target 68)
    v9 = getChildAt(baleMesh, 1 - 1)
    Bale.setBaleMeshVisibilityCut(v9, node, axis, direction, recursively)
    -- TODO: structure LOP_FORNLOOP (pc 67, target 53)
  end
end
function Bale:doDensityMapItemAreaUpdate(func, target, ...)
  if self.isRoundbale then
    local direction, recursively, v5 = getWorldTranslation(self.nodeId)
    func(...)
    return
  end
  direction, recursively, v5 = localToWorld(self.nodeId, self.width * 0.4, self.height * 0.4, self.length * 0.4)
  local v6, v7, v8 = localToWorld(self.nodeId, -self.width * 0.4, -self.height * 0.4, self.length * 0.4)
  local v9, v10, v11 = localToWorld(self.nodeId, self.width * 0.4, self.height * 0.4, -self.length * 0.4)
  func(...)
end
function Bale:showInfo(box)
  local fillType = self:getFillType()
  local fillLevel = self:getFillLevel()
  local recursively = recursively:getFillTypeByIndex(fillType)
  local v8 = v8:formatVolume(fillLevel, 0)
  box:addLine(...)
  local v5 = self:getIsFermenting()
  if v5 then
    local v7 = v7:getText("info_fermenting")
    local v11 = self:getFermentingPercentage()
    v8 = string.format("%d%%", v11 * 100)
    box:addLine(...)
  end
  v7 = v7:getText("infohud_mass")
  local v10 = self:getMass()
  v8 = v8:formatMass(...)
  box:addLine(...)
end
function Bale.createDummyBale(xmlFilename, fillTypeIndex, wrappingState, wrappingColor)
  local xmlFile = XMLFile.load("TempBale", xmlFilename, BaleManager.baleXMLSchema)
  local i3dFilename = xmlFile:getValue("bale.filename")
  if i3dFilename ~= nil then
    local v9, v10 = Utils.getModNameAndBaseDirectory(xmlFilename)
    local v11 = Utils.getFilename(i3dFilename, v10)
    local v11, v12 = v11:loadSharedI3DFile(v11, false, false)
    if v11 ~= 0 then
      v11 = getChildAt(v11, 0)
      setRigidBodyType(v11, RigidBodyType.NONE)
      unlink(v11)
      Bale.loadFillTypesFromXML({}, xmlFile, v10)
      Bale.setFillTypeTextures(v11, {}, fillTypeIndex)
      v12 = Bale.loadVisualMeshesFromXML(v11, xmlFile, v10)
      if 0 >= (wrappingState or 0) then
      end
      v13(v14, v15, true)
      Bale.updateVisualMeshWrappingState(v12, wrappingState, wrappingColor)
      delete(v6)
    end
  end
  xmlFile:delete()
  return v5, v7
end
function Bale.loadFillTypesFromXML(fillTypes, xmlFile, baseDirectory)
  xmlFile:iterate("bale.fillTypes.fillType", function(fillTypes, xmlFile)
    local baseDirectory = baseDirectory:getValue(xmlFile .. "#name")
    local direction = direction:getFillTypeIndexByName(baseDirectory)
    if direction ~= nil then
      local v5 = v5:getValue(xmlFile .. "#capacity", 1000)
      local v6 = v6:getValue(xmlFile .. "#mass", 500)
      v5 = v5:getValue(xmlFile .. "#forceAcceleration")
      v5 = v5:getValue(xmlFile .. "#supportsWrapping", false)
      v5 = v5:getValue(xmlFile .. ".diffuse#filename")
      if v5 ~= nil then
        v6 = Utils.getFilename(v5, u1)
      end
      v6 = v6:getValue(xmlFile .. ".normal#filename")
      if v6 ~= nil then
        local v7 = Utils.getFilename(v6, u1)
        recursively.normalFilename = v7
      end
      v7 = v7:getValue(xmlFile .. ".specular#filename")
      if v7 ~= nil then
        local v8 = Utils.getFilename(v7, u1)
        recursively.specularFilename = v8
      end
      v8 = v8:getValue(xmlFile .. ".alpha#filename")
      if v8 ~= nil then
        local v9 = Utils.getFilename(v8, u1)
        recursively.alphaFilename = v9
      end
      v9 = v9:getValue(xmlFile .. ".fermenting#outputFillType")
      local v10 = v10:getFillTypeIndexByName(v9)
      if v10 ~= nil then
        recursively.fermenting = {outputFillTypeIndex = v10}
        local v12 = v12:getValue(xmlFile .. ".fermenting#requiresWrapping", true)
        recursively.fermenting.requiresWrapping = v12
        v12 = v12:getValue(xmlFile .. ".fermenting#time", 0)
        recursively.fermenting.time = v12
      end
      table.insert(u2, recursively)
    end
  end)
end
function Bale.setFillTypeTextures(nodeId, fillTypes, fillTypeIndex)
  -- TODO: structure LOP_FORNPREP (pc 3, target 18)
  if fillTypes[1].fillTypeIndex == fillTypeIndex then
    Bale.setFillTypeTexturesForNode(nodeId, fillTypes[1])
    return
  end
  -- TODO: structure LOP_FORNLOOP (pc 17, target 4)
end
function Bale.setFillTypeTexturesForNode(nodeId, fillTypeInfo)
  local numChildren = getNumOfChildren(nodeId)
  -- TODO: structure LOP_FORNPREP (pc 7, target 20)
  local v7 = getChildAt(nodeId, 1 - 1)
  Bale.setFillTypeTexturesForNode(v7, fillTypeInfo)
  -- TODO: structure LOP_FORNLOOP (pc 19, target 8)
  local direction = getHasClassId(nodeId, ClassIds.SHAPE)
  if direction then
    direction = getMaterial(nodeId, 0)
    if direction ~= 0 then
      local recursively = getMaterialCustomShaderFilename(direction)
      local v5 = recursively:contains("silageBaleShader")
      if v5 then
        local v5, v6, v7, v8 = getShaderParameter(nodeId, "wrappingState")
        local v9, v10, v11, v12 = getShaderParameter(nodeId, "colorScale")
        if fillTypeInfo.diffuseFilename ~= nil then
          local v13 = setMaterialDiffuseMapFromFile(direction, fillTypeInfo.diffuseFilename, true, true, false)
        end
        if fillTypeInfo.normalFilename ~= nil then
          v13 = setMaterialNormalMapFromFile(direction, fillTypeInfo.normalFilename, true, false, false)
        end
        if fillTypeInfo.specularFilename ~= nil then
          v13 = setMaterialGlossMapFromFile(direction, fillTypeInfo.specularFilename, true, true, false)
        end
        if fillTypeInfo.alphaFilename ~= nil then
          v13 = setMaterialCustomMapFromFile(direction, "alphaMap", fillTypeInfo.alphaFilename, true, false, false)
        end
        setMaterial(nodeId, direction, 0)
        setShaderParameter(nodeId, "wrappingState", v5, 0, 0, 0, false)
        setShaderParameter(nodeId, "colorScale", v9, v10, v11, v12, false)
      end
    end
  end
end
function Bale.loadVisualMeshesFromXML(rootNode, xmlFile, baseDirectory)
  xmlFile:iterate("bale.baleMeshes.baleMesh", function(rootNode, xmlFile)
    local direction = direction:getValue(xmlFile .. "#node", nil, u1)
    direction = direction:getValue(xmlFile .. "#supportsWrapping", true)
    direction = direction:getValue(xmlFile .. "#fillTypes")
    local recursively = recursively:getFillTypesByNames(direction)
    recursively = recursively:getValue(xmlFile .. "#isTensionBeltMesh", false)
    if {node = direction, supportsWrapping = direction, fillTypes = recursively, fillTypeVisibility = true, isTensionBeltMesh = recursively}.isTensionBeltMesh then
      table.insert(u2, {node = direction, supportsWrapping = direction, fillTypes = recursively, fillTypeVisibility = true, isTensionBeltMesh = recursively}.node)
    end
    table.insert(u3, baseDirectory)
  end)
  return {}, {}
end
function Bale:updateVisualMeshVisibility(node, axis)
  -- TODO: structure LOP_FORNPREP (pc 3, target 51)
  if self[1].fillTypes ~= nil and 0 < #self[1].fillTypes then
    setVisibility(self[1].node, false)
    self[1].fillTypeVisibility = false
    -- TODO: structure LOP_FORNPREP (pc 29, target 50)
    if self[1].fillTypes[1] == node then
      if not self[1].supportsWrapping then
        -- if v2 then goto L45 end
      end
      setVisibility(v6.node, true)
      v6.fillTypeVisibility = true
    else
      -- TODO: structure LOP_FORNLOOP (pc 49, target 30)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 50, target 4)
end
function Bale:updateVisualMeshWrappingState(node, axis)
  -- TODO: structure LOP_FORNPREP (pc 3, target 53)
  setShaderParameter(self[1].node, "wrappingState", node, 0, 0, 0, false)
  if 0 < node then
    local v7 = getHasShaderParameter(self[1].node, "colorScale")
    if v7 then
      if axis ~= nil then
        -- cmp-jump LOP_JUMPXEQKN R7 aux=0x80000007 -> L42
        setShaderParameter(self[1].node, "colorScale", axis[1], axis[2], axis[3], axis[4], false)
      else
        setShaderParameter(self[1].node, "colorScale", 0.85, 0.85, 0.85, 1, false)
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 52, target 4)
end
BaleActivatable = {}
local node = Class(BaleActivatable)
function BaleActivatable.new(bale)
  setmetatable({}, u0)
  local axis = axis:getText("action_cutBale")
  return {bale = bale, activateText = axis}
end
function BaleActivatable:getIsActivatable()
  local node = node:getCanInteract()
  if node then
    node = node:getCanBeOpened()
    if node then
      return true
    end
  end
  return false
end
function BaleActivatable:getHasAccess(farmId)
  local v5 = v5:getOwnerFarmId()
  return axis:canFarmAccessOtherId(...)
end
function BaleActivatable:getDistance(posX, posY, posZ)
  if self.bale.nodeId ~= 0 then
    local recursively, v5, v6 = getWorldTranslation(self.bale.nodeId)
    return MathUtil.vector2Length(posX - recursively, posZ - v6)
  end
  return math.huge
end
function BaleActivatable:run()
  if g_server ~= nil then
    node:open()
    return
  end
  local node = node:getServerConnection()
  local direction = BaleOpenEvent.new(self.bale)
  node:sendEvent(...)
end
