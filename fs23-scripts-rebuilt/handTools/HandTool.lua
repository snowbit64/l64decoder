-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HandTool = {}
local HandTool_mt = Class(HandTool, Object)
InitStaticObjectClass(HandTool, "HandTool", ObjectIds.OBJECT_HANDTOOL)
HandTool.xmlSchema = nil
HandTool.handToolTypes = {}
function registerHandTool(typeName, classObject)
  local v2 = ClassUtil.getIsValidClassName(typeName)
  if not v2 then
    print("Error: invalid handtool typeName: " .. typeName)
    return
  end
  HandTool.handToolTypes[typeName] = classObject
end
v1:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("handTool")
  HandTool.xmlSchema = v1
end)
v1:addInitSchemaFunction(function()
  StoreManager.registerStoreDataXMLPaths(HandTool.xmlSchema, "handTool")
  HandTool.xmlSchema:register(XMLValueType.STRING, "handTool.annotation", "Annotation", nil, false)
  HandTool.xmlSchema:register(XMLValueType.STRING, "handTool.handToolType", "Hand tool type", nil, true)
  HandTool.xmlSchema:register(XMLValueType.STRING, "handTool.filename", "HandTool i3d file", nil, true)
  HandTool.xmlSchema:register(XMLValueType.VECTOR_TRANS, "handTool.handNode.firstPerson#position", "Position", "0 0 0")
  HandTool.xmlSchema:register(XMLValueType.VECTOR_ROT, "handTool.handNode.firstPerson#rotation", "Rotation", "0 0 0")
  HandTool.xmlSchema:register(XMLValueType.NODE_INDEX, "handTool.handNode.firstPerson#node", "First person node", "root node")
  HandTool.xmlSchema:register(XMLValueType.NODE_INDEX, "handTool.handNode.firstPerson#referenceNode", "Reference node")
  HandTool.xmlSchema:register(XMLValueType.VECTOR_TRANS, "handTool.handNode.thirdPerson#position", "Position", "0 0 0")
  HandTool.xmlSchema:register(XMLValueType.VECTOR_ROT, "handTool.handNode.thirdPerson#rotation", "Rotation", "0 0 0")
  HandTool.xmlSchema:register(XMLValueType.NODE_INDEX, "handTool.handNode.thirdPerson#node", "First person node", "root node")
  HandTool.xmlSchema:register(XMLValueType.NODE_INDEX, "handTool.handNode.thirdPerson#referenceNode", "Reference node")
  HandTool.xmlSchema:register(XMLValueType.STRING, "handTool.playerWorkStylePreset", "Custom Player workstyle preset name")
  I3DUtil.registerI3dMappingXMLPaths(HandTool.xmlSchema, "handTool")
  IKUtil.registerIKChainTargetsXMLPaths(HandTool.xmlSchema, "handTool.targets")
end)
function HandTool.init()
  for v3, v4 in pairs(HandTool.handToolTypes) do
    local v5 = rawget(v4, "init")
    if not v5 then
      continue
    end
    v4.init()
  end
end
function HandTool.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.static = true
  v3.player = nil
  v3.owner = nil
  v3.currentPlayerHandNode = nil
  v3.price = 0
  v3.age = 0
  v3.activatePressed = false
  v3.isDeleted = false
  v3.components = {}
  v3.i3dMappings = {}
  return v3
end
function HandTool:load(xmlFilename, player, asyncCallbackFunction, asyncCallbackArguments)
  self.configFileName = xmlFilename
  local v5, v6 = Utils.getModNameAndBaseDirectory(xmlFilename)
  self.customEnvironment = v5
  self.baseDirectory = v6
  v5 = XMLFile.load("TempXML", xmlFilename, HandTool.xmlSchema)
  if v5 == nil then
    return false
  end
  v6 = v5:getValue("handTool.filename")
  if v6 == nil then
    v5:delete()
    return false
  end
  local v7 = Utils.getFilename(v6, self.baseDirectory)
  self.i3dFilename = v7
  self.player = player
  v7:pinSharedI3DFileInCache(self.i3dFilename)
  if asyncCallbackFunction ~= nil then
    local v8 = v8:loadSharedI3DFileAsync(self.i3dFilename, false, false, self.handToolI3DLoaded, self, {xmlFile = v5, asyncCallbackFunction = asyncCallbackFunction, asyncCallbackArguments = asyncCallbackArguments})
    self.sharedLoadRequestId = v8
  else
    local v8, v9, v10 = v8:loadSharedI3DFile(self.i3dFilename, false, false)
    self.sharedLoadRequestId = v9
    self:handToolI3DLoaded(v8, v10, {xmlFile = v5, asyncCallbackFunction = asyncCallbackFunction, asyncCallbackArguments = asyncCallbackArguments})
  end
  return true
end
function HandTool:handToolI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    if not self.isDeleted then
      local v7 = getChildAt(i3dNode, 0)
      self.rootNode = v7
      v7 = getNumOfChildren(i3dNode)
      -- TODO: structure LOP_FORNPREP (pc 25, target 44)
      local v12 = getChildAt(i3dNode, 0)
      table.insert(self.components, {node = v12})
      -- TODO: structure LOP_FORNLOOP (pc 43, target 26)
      unlink(self.rootNode)
      I3DUtil.loadI3DMapping(args.xmlFile, "handTool", self.components, self.i3dMappings)
      self:postLoad(args.xmlFile)
    end
    v4:delete()
    delete(i3dNode)
    if v5 ~= nil then
      v5(self.player, self, v6)
    end
  end
end
function HandTool:postLoad(xmlFile)
  self.handNodePosition = {}
  self.handNodeRotation = {}
  self.handNode = nil
  self.originalHandNodeParent = nil
  self.referenceNode = nil
  if self.player == g_currentMission.player then
    local v2 = xmlFile:getValue("handTool.handNode.firstPerson#position", "0 0 0", true)
    self.handNodePosition = v2
    v2 = xmlFile:getValue("handTool.handNode.firstPerson#rotation", "0 0 0", true)
    self.handNodeRotation = v2
    v2 = xmlFile:getValue("handTool.handNode.firstPerson#node", self.rootNode, self.components, self.i3dMappings)
    self.handNode = v2
    v2 = xmlFile:getValue("handTool.handNode.firstPerson#referenceNode", nil, self.components, self.i3dMappings)
    self.referenceNode = v2
  else
    v2 = xmlFile:getValue("handTool.handNode.thirdPerson#position", "0 0 0", true)
    self.handNodePosition = v2
    v2 = xmlFile:getValue("handTool.handNode.thirdPerson#rotation", "0 0 0", true)
    self.handNodeRotation = v2
    v2 = xmlFile:getValue("handTool.handNode.thirdPerson#node", self.rootNode, self.components, self.i3dMappings)
    self.handNode = v2
    v2 = xmlFile:getValue("handTool.handNode.thirdPerson#referenceNode", nil, self.components, self.i3dMappings)
    self.referenceNode = v2
  end
  if self.rootNode ~= self.handNode then
    v2 = getParent(self.handNode)
    self.originalHandNodeParent = v2
  end
  v2 = xmlFile:getValue("handTool.playerWorkStylePreset", nil)
  self.customWorkStylePresetName = v2
  local v4 = unpack(self.handNodePosition)
  setTranslation(...)
  v4 = unpack(self.handNodeRotation)
  setRotation(...)
  v2 = v2:getItemByXMLFilename(self.configFileName)
  if self.price ~= 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L165
  end
  local v3 = StoreItemUtil.getDefaultPrice(v2)
  self.price = v3
  if g_currentMission ~= nil and v2.canBeSold then
    v3:subscribe(MessageType.PERIOD_CHANGED, self.periodChanged, self)
  end
  self.targets = {}
  IKUtil.loadIKChainTargets(xmlFile, "handTool.targets", self.components, self.targets, self.i3dMappings)
  setVisibility(self.rootNode, false)
  self.isActive = false
  return true
end
function HandTool:setHandNode(playerHandNode)
  if self.currentPlayerHandNode ~= playerHandNode then
    self.currentPlayerHandNode = playerHandNode
    link(playerHandNode, self.handNode)
    if self.referenceNode ~= nil then
      local v2, v3, v4 = getWorldTranslation(self.referenceNode)
      local v6 = getParent(self.handNode)
      local v5, v6, v7 = worldToLocal(v6, v2, v3, v4)
      v5, v6, v7 = getTranslation(self.handNode)
      setTranslation(self.handNode, v5 - v5, v6 - v6, v7 - v7)
    end
  end
end
function HandTool:delete()
  self:removeActionEvents()
  if g_currentMission ~= nil then
    v1:unsubscribe(MessageType.PERIOD_CHANGED, self)
  end
  if self.rootNode ~= nil and self.rootNode ~= 0 then
    if self.originalHandNodeParent ~= nil then
      local v1 = getParent(self.handNode)
      if v1 ~= self.originalHandNodeParent then
        link(self.originalHandNodeParent, self.handNode)
      end
    end
    delete(self.rootNode)
  end
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  local v2 = v2:superClass()
  v2.delete(self)
  self.isDeleted = true
end
function HandTool:update(dt, allowInput)
  if self.isActive then
    self:raiseActive()
  end
end
function HandTool.getNeedCustomWorkStyle(v0)
  return true
end
function HandTool:onActivate(allowInput)
  setVisibility(self.rootNode, true)
  self.isActive = true
  self:raiseActive()
  if self.player.isOwner then
    self:registerActionEvents()
  end
  local v2 = self:getNeedCustomWorkStyle()
  if v2 then
    v2:setCustomWorkStylePreset(self.customWorkStylePresetName)
  end
end
function HandTool:onDeactivate(allowInput)
  setVisibility(self.rootNode, false)
  self.isActive = false
  self:removeActionEvents()
  v2:setCustomWorkStylePreset(nil)
end
function HandTool.loadFromXMLFile(v0, v1, v2, v3)
  return true
end
function HandTool:saveToXMLFile(xmlFile, key, usedModNames)
  local v8 = NetworkUtil.convertToNetworkFilename(self.configFileName)
  local v7 = HTMLUtil.encodeToHTML(...)
  xmlFile:setValue(...)
end
function HandTool:getDailyUpkeep()
  local v1 = v1:getItemByXMLFilename(self.configFileName)
  if v1.lifetime ~= nil and v1.lifetime ~= 0 then
    local v3 = math.min(self.age / v1.lifetime, 1)
  end
  local v4 = StoreItemUtil.getDailyUpkeep(v1, nil)
  return v4 * v2
end
function HandTool:getSellPrice()
  local v2 = v2:getItemByXMLFilename(self.configFileName)
  if v2.lifetime ~= nil and v2.lifetime ~= 0 then
    local v7 = math.min(self.age / v2.lifetime, 1)
    local v4 = math.exp(-3.5 * v7)
  end
  v7 = math.max(v1, 0.05)
  v4 = math.floor(self.price * v7)
  return v4
end
function HandTool:periodChanged()
  self.age = self.age + 1
end
function HandTool.isBeingUsed(v0)
  return false
end
function HandTool.registerActionEvents(v0)
  v1:beginActionEventsModification(Player.INPUT_CONTEXT_NAME)
  v1:endActionEventsModification()
end
function HandTool.removeActionEvents(v0)
  v1:beginActionEventsModification(Player.INPUT_CONTEXT_NAME)
  v1:removeActionEventsByTarget(v0)
  v1:endActionEventsModification()
end
