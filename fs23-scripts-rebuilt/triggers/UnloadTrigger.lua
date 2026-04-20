-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

UnloadTrigger = {}
local UnloadTrigger_mt = Class(UnloadTrigger, Object)
InitStaticObjectClass(UnloadTrigger, "UnloadTrigger", ObjectIds.OBJECT_UNLOAD_TRIGGER)
function UnloadTrigger.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.fillTypes = {}
  v3.avoidFillTypes = {}
  v3.acceptedToolTypes = {}
  v3.fillTypeConversions = {}
  v3.notAllowedWarningText = nil
  v3.triggers = {}
  v3.extraAttributes = nil
  return v3
end
function UnloadTrigger:load(components, xmlFile, xmlNode, target, extraAttributes, i3dMappings)
  self.triggers = {}
  xmlFile:iterate(xmlNode .. ".trigger", function(self, components)
    local xmlFile = xmlFile:getValue(components .. "#class")
    if xmlFile ~= nil then
      local xmlNode = ClassUtil.getClassObject(xmlFile)
      if xmlNode ~= nil then
        local target = xmlNode.new(u1.isServer, u1.isClient)
        local extraAttributes = target:load(u2, u0, components, u1, u3)
        if extraAttributes then
          target:setTarget(u1)
          target:register(true)
          table.insert(u1.triggers, target)
          return
        end
        target:delete()
        return
      end
      Logging.xmlError(u0, "Trigger class '%s' not defined", xmlFile, components)
      return
    end
    Logging.xmlError(u0, "Missing class attribute for '%s'", xmlFile, components)
  end)
  local v8 = xmlFile:hasProperty(xmlNode .. ".baleTrigger")
  if v8 then
    v8 = xmlFile:getValue(xmlNode .. ".baleTrigger" .. "#class", "BaleUnloadTrigger")
    local v9 = ClassUtil.getClassObject(v8)
    if v9 == nil then
      Logging.xmlError(xmlFile, "BaleTrigger class '%s' not defined", v8, xmlNode .. ".baleTrigger")
      return false
    end
    local v10 = v9.new(self.isServer, self.isClient)
    self.baleTrigger = v10
    v10 = v10:load(components, xmlFile, v7, self, i3dMappings)
    if v10 then
      v10:setTarget(self)
      v10:register(true)
    else
      self.baleTrigger = nil
    end
  end
  v9 = xmlFile:hasProperty(xmlNode .. ".woodTrigger")
  if v9 then
    v9 = xmlFile:getValue(xmlNode .. ".woodTrigger" .. "#class", "WoodUnloadTrigger")
    v10 = ClassUtil.getClassObject(v9)
    if v10 == nil then
      Logging.xmlError(xmlFile, "WoodTrigger class '%s' not defined", v9, xmlNode .. ".woodTrigger")
      return false
    end
    local v11 = v10.new(self.isServer, self.isClient)
    self.woodTrigger = v11
    v11 = v11:load(components, xmlFile, v8, self, i3dMappings)
    if v11 then
      v11:setTarget(self)
      v11:register(true)
    else
      self.woodTrigger = nil
    end
  end
  v9 = xmlFile:getValue(xmlNode .. "#exactFillRootNode", nil, components, i3dMappings)
  self.exactFillRootNode = v9
  if self.exactFillRootNode ~= nil then
    v9 = CollisionFlag.getHasFlagSet(self.exactFillRootNode, CollisionFlag.FILLABLE)
    if not v9 then
      local v12 = CollisionFlag.getBit(CollisionFlag.FILLABLE)
      local v13 = I3DUtil.getNodePath(self.exactFillRootNode)
      Logging.xmlWarning(...)
      return false
    end
    v9:addNodeObject(self.exactFillRootNode, self)
  end
  v9 = xmlFile:getValue(xmlNode .. "#aiNode", nil, components, i3dMappings)
  self.aiNode = v9
  if self.aiNode == nil then
  end
  self.supportsAIUnloading = true
  v9 = xmlFile:getValue(xmlNode .. "#priceScale", nil)
  if v9 ~= nil then
    self.extraAttributes = {priceScale = v9}
  end
  xmlFile:iterate(xmlNode .. ".fillTypeConversion", function(self, components)
    local target = target:getValue(components .. "#incomingFillType")
    local xmlFile = xmlFile:getFillTypeIndexByName(...)
    if xmlFile ~= nil then
      local extraAttributes = extraAttributes:getValue(components .. "#outgoingFillType")
      local xmlNode = xmlNode:getFillTypeIndexByName(...)
      if xmlNode ~= nil then
        extraAttributes = extraAttributes:getValue(components .. "#ratio", 1)
        target = MathUtil.clamp(extraAttributes, 0.01, 10000)
        u1.fillTypeConversions[xmlFile] = {outgoingFillType = xmlNode, ratio = target}
      end
    end
  end)
  if target ~= nil then
    self:setTarget(target)
  end
  self:loadFillTypes(xmlFile, xmlNode)
  self:loadAcceptedToolType(xmlFile, xmlNode)
  self:loadAvoidFillTypes(xmlFile, xmlNode)
  self.isEnabled = true
  if not extraAttributes then
  end
  self.extraAttributes = v10
  return true
end
function UnloadTrigger:delete()
  for v4, v5 in ipairs(self.triggers) do
    v5:delete()
  end
  if self.baleTrigger ~= nil then
    v1:delete()
  end
  if self.woodTrigger ~= nil then
    v1:delete()
  end
  if self.exactFillRootNode ~= nil then
    v1:removeNodeObject(self.exactFillRootNode)
  end
  v2 = v2:superClass()
  v2.delete(self)
end
function UnloadTrigger:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    for v6, v7 in ipairs(self.triggers) do
      local v8 = NetworkUtil.readNodeObjectId(streamId)
      v7:readStream(streamId, connection)
      v9:finishRegisterObject(v7, v8)
    end
    if self.baleTrigger ~= nil then
      v3 = NetworkUtil.readNodeObjectId(streamId)
      v4:readStream(streamId, connection)
      v4:finishRegisterObject(self.baleTrigger, v3)
    end
    if self.woodTrigger ~= nil then
      v3 = NetworkUtil.readNodeObjectId(streamId)
      v4:readStream(streamId, connection)
      v4:finishRegisterObject(self.woodTrigger, v3)
    end
  end
end
function UnloadTrigger:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    for v6, v7 in ipairs(self.triggers) do
      local v10 = NetworkUtil.getObjectId(v7)
      NetworkUtil.writeNodeObjectId(...)
      v7:writeStream(streamId, connection)
      v8:registerObjectInStream(connection, v7)
    end
    if self.baleTrigger ~= nil then
      v5 = NetworkUtil.getObjectId(self.baleTrigger)
      NetworkUtil.writeNodeObjectId(...)
      v3:writeStream(streamId, connection)
      v3:registerObjectInStream(connection, self.baleTrigger)
    end
    if self.woodTrigger ~= nil then
      v5 = NetworkUtil.getObjectId(self.woodTrigger)
      NetworkUtil.writeNodeObjectId(...)
      v3:writeStream(streamId, connection)
      v3:registerObjectInStream(connection, self.woodTrigger)
    end
  end
end
function UnloadTrigger:loadAcceptedToolType(xmlFile, xmlNode)
  local acceptedToolTypeNames = xmlFile:getValue(xmlNode .. "#acceptedToolTypes")
  local v4 = string.getVector(acceptedToolTypeNames)
  if v4 ~= nil then
    for v8, v9 in pairs(v4) do
      local v10 = v10:getToolTypeIndexByName(v9)
      self.acceptedToolTypes[v10] = true
    end
    return
  end
  self.acceptedToolTypes = nil
end
function UnloadTrigger:loadAvoidFillTypes(xmlFile, xmlNode)
  local v3 = xmlFile:getValue(xmlNode .. "#avoidFillTypeCategories")
  local avoidFillTypeNames = xmlFile:getValue(xmlNode .. "#avoidFillTypes")
  if v3 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L26
    local v6 = v6:getFillTypesByCategoryNames(v3, "Warning: UnloadTrigger has invalid avoidFillTypeCategory '%s'.")
  elseif v3 == nil and avoidFillTypeNames ~= nil then
    v6 = v6:getFillTypesByNames(avoidFillTypeNames, "Warning: UnloadTrigger has invalid avoidFillType '%s'.")
  end
  if v5 ~= nil then
    for v9, v10 in pairs(v5) do
      self.avoidFillTypes[v10] = true
    end
    return
  end
  self.avoidFillTypes = nil
end
function UnloadTrigger:loadFillTypes(xmlFile, xmlNode)
  local v3 = xmlFile:getValue(xmlNode .. "#fillTypeCategories")
  local fillTypeNames = xmlFile:getValue(xmlNode .. "#fillTypes")
  if v3 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L26
    local v6 = v6:getFillTypesByCategoryNames(v3, "Warning: UnloadTrigger has invalid fillTypeCategory '%s'.")
  elseif fillTypeNames ~= nil then
    v6 = v6:getFillTypesByNames(fillTypeNames, "Warning: UnloadTrigger has invalid fillType '%s'.")
  end
  if v5 ~= nil then
    for v9, v10 in pairs(v5) do
      self.fillTypes[v10] = true
    end
    return
  end
  self.fillTypes = nil
end
function UnloadTrigger:setTarget(object)
  if object.getIsFillTypeAllowed == nil then
  end
  assert(true, "Missing 'getIsFillTypeAllowed' method for given target")
  if object.getIsToolTypeAllowed == nil then
  end
  assert(true, "Missing 'getIsToolTypeAllowed' method for given target")
  if object.addFillLevelFromTool == nil then
  end
  assert(true, "Missing 'addFillLevelFromTool' method for given target")
  if object.getFreeCapacity == nil then
  end
  assert(true, "Missing 'getFreeCapacity' method for given target")
  self.target = object
end
function UnloadTrigger:getTarget()
  return self.target
end
function UnloadTrigger.getFillUnitIndexFromNode(v0, xmlFile)
  return 1
end
function UnloadTrigger:getFillUnitExactFillRootNode(fillUnitIndex)
  return self.exactFillRootNode
end
function UnloadTrigger:addFillUnitFillLevel(farmId, fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData, extraAttributes)
  if self.fillTypeConversions[fillTypeIndex] ~= nil then
    if not extraAttributes then
    end
    local v11 = v11:addFillLevelFromTool(v13, v14, v15, v16, v17, v18)
    return v11 / v10
  end
  if not extraAttributes then
  end
  return v9:addFillLevelFromTool(v11, v12, v13, v14, v15, v16)
end
function UnloadTrigger:getFillUnitSupportsFillType(fillUnitIndex, fillType)
  return self:getIsFillTypeSupported(fillType)
end
function UnloadTrigger.getFillUnitSupportsToolType(v0, xmlFile, xmlNode, v3)
  return true
end
function UnloadTrigger:getFillUnitAllowsFillType(fillUnitIndex, fillType)
  return self:getIsFillTypeAllowed(fillType)
end
function UnloadTrigger:getIsFillTypeAllowed(fillType)
  return self:getIsFillTypeSupported(fillType)
end
function UnloadTrigger:getIsFillTypeSupported(fillType)
  if self.fillTypes ~= nil and not self.fillTypes[fillType] then
    return false
  end
  if self.avoidFillTypes ~= nil and self.avoidFillTypes[fillType] then
    return false
  end
  if self.target ~= nil then
    if self.fillTypeConversions[fillType] ~= nil then
    end
    local v3 = v3:getIsFillTypeAllowed(fillType, self.extraAttributes)
    if not v3 then
      return false
    end
  end
  return true
end
function UnloadTrigger:getIsFillAllowedFromFarm(farmId)
  if self.target ~= nil and self.target.getIsFillAllowedFromFarm ~= nil then
    return xmlNode:getIsFillAllowedFromFarm(farmId)
  end
  return true
end
function UnloadTrigger:getFillUnitFreeCapacity(fillUnitIndex, fillTypeIndex, farmId)
  if self.target.getFreeCapacity ~= nil then
    if self.fillTypeConversions[fillTypeIndex] ~= nil then
      local v6 = v6:getFreeCapacity(self.fillTypeConversions[fillTypeIndex].outgoingFillType, farmId, self.extraAttributes)
      return v6 / self.fillTypeConversions[fillTypeIndex].ratio
    end
    return v5:getFreeCapacity(fillTypeIndex, farmId, self.extraAttributes)
  end
  return 0
end
function UnloadTrigger:getIsToolTypeAllowed(toolType)
  if self.acceptedToolTypes ~= nil and self.acceptedToolTypes[toolType] ~= true then
  end
  if xmlNode then
    return v3:getIsToolTypeAllowed(toolType)
  end
  return false
end
function UnloadTrigger:getCustomDischargeNotAllowedWarning()
  return self.notAllowedWarningText
end
function UnloadTrigger:getSupportAIUnloading()
  return self.supportsAIUnloading
end
function UnloadTrigger:getAITargetPositionAndDirection()
  local xmlFile, xmlNode, v3 = getWorldTranslation(self.aiNode)
  local fillTypeNames, v5, v6 = localDirectionToWorld(self.aiNode, 0, 0, 1)
  return xmlFile, v3, fillTypeNames, v6
end
function UnloadTrigger:setOwnerFarmId(farmId, noEventSend)
  local fillTypeNames = fillTypeNames:superClass()
  fillTypeNames.setOwnerFarmId(self, farmId, noEventSend)
  for v6, v7 in ipairs(self.triggers) do
    v7:setOwnerFarmId(farmId, true)
  end
  if self.baleTrigger ~= nil then
    v3:setOwnerFarmId(farmId, true)
  end
  if self.woodTrigger ~= nil then
    v3:setOwnerFarmId(farmId, true)
  end
end
function UnloadTrigger:registerXMLPaths(xmlFile)
  BaleUnloadTrigger.registerXMLPaths(self, xmlFile .. ".baleTrigger")
  self:register(XMLValueType.STRING, xmlFile .. ".baleTrigger#class", "Name of bale trigger class")
  WoodUnloadTrigger.registerXMLPaths(self, xmlFile .. ".woodTrigger")
  self:register(XMLValueType.STRING, xmlFile .. ".woodTrigger#class", "Name of wood trigger class")
  self:register(XMLValueType.STRING, xmlFile .. ".trigger(?)#class", "Name of pallet trigger class")
  PalletUnloadTrigger.registerXMLPaths(self, xmlFile .. ".trigger(?)")
  self:register(XMLValueType.NODE_INDEX, xmlFile .. "#exactFillRootNode", "Exact fill root node")
  self:register(XMLValueType.FLOAT, xmlFile .. "#priceScale", "Price scale added for sold goods")
  self:register(XMLValueType.STRING, xmlFile .. "#acceptedToolTypes", "List of accepted tool types")
  self:register(XMLValueType.STRING, xmlFile .. "#avoidFillTypeCategories", "Avoided fill type categories (Even if target would allow the fill type)")
  self:register(XMLValueType.STRING, xmlFile .. "#avoidFillTypes", "Avoided fill types (Even if target would allow the fill type)")
  self:register(XMLValueType.STRING, xmlFile .. "#fillTypeCategories", "Supported fill type categories")
  self:register(XMLValueType.STRING, xmlFile .. "#fillTypes", "Supported fill types")
  self:register(XMLValueType.NODE_INDEX, xmlFile .. "#aiNode", "AI target node, required for the station to support AI. AI drives to the node in positive Z direction. Height is not relevant.")
  self:register(XMLValueType.STRING, xmlFile .. ".fillTypeConversion(?)#incomingFillType", "Filltype to be converted")
  self:register(XMLValueType.STRING, xmlFile .. ".fillTypeConversion(?)#outgoingFillType", "Filltype to be converted to")
  self:register(XMLValueType.FLOAT, xmlFile .. ".fillTypeConversion(?)#ratio", "Conversion ratio between input- and output amount", 1)
end
