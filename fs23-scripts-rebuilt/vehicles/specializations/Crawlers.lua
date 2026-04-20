-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Crawlers = {VRAM_PER_CRAWLER = 1572864, xmlSchema = nil}
function Crawlers.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Wheels, v0)
end
function Crawlers.initSpecialization()
  v0:addVRamUsageFunction(Crawlers.getVRamUsageFromXML)
  Vehicle.xmlSchema:setXMLSpecializationType("Crawlers")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#linkNode", "Link node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#isLeft", "Is left crawler", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#trackWidth", "Track width", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#filename", "Crawler filename")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#offset", "Crawler position offset")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#wheelIndex", "Speed reference wheel index")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#wheelIndices", "Multiple speed reference wheels. The average speed of the wheels WITH ground contact is used")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#speedReferenceNode", "Speed reference node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#fieldDirtMultiplier", "Field dirt multiplier", 75)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#streetDirtMultiplier", "Street dirt multiplier", -150)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#minDirtPercentage", "Min. dirt while getting clean on non field ground", 0.35)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#maxDirtOffset", "Max. dirt amount offset to global dirt node", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).crawlers.crawler(?)" .. "#dirtColorChangeSpeed", "Defines speed to change the dirt color (sec)", 20)
  Vehicle.xmlSchema:setXMLSpecializationType()
  local crawlerSchema = XMLSchema.new("crawler")
  crawlerSchema:shareDelayedRegistrationFuncs(Vehicle.xmlSchema)
  crawlerSchema:register(XMLValueType.STRING, "crawler.file#name", "Crawler i3d filename")
  crawlerSchema:register(XMLValueType.NODE_INDEX, "crawler.file#leftNode", "Crawler left node in i3d")
  crawlerSchema:register(XMLValueType.NODE_INDEX, "crawler.file#rightNode", "Crawler right node in i3d")
  crawlerSchema:register(XMLValueType.NODE_INDEX, "crawler.scrollerNodes.scrollerNode(?)#node", "Scroller node")
  crawlerSchema:register(XMLValueType.FLOAT, "crawler.scrollerNodes.scrollerNode(?)#scrollSpeed", "Scroll speed", 1)
  crawlerSchema:register(XMLValueType.FLOAT, "crawler.scrollerNodes.scrollerNode(?)#scrollLength", "Scroll length", 1)
  crawlerSchema:register(XMLValueType.STRING, "crawler.scrollerNodes.scrollerNode(?)#shaderParameterName", "Shader parameter name", "offsetUV")
  crawlerSchema:register(XMLValueType.STRING, "crawler.scrollerNodes.scrollerNode(?)#shaderParameterNamePrev", "Shader parameter name (Prev)", "#shaderParameterName prefixed with 'prev'")
  crawlerSchema:register(XMLValueType.INT, "crawler.scrollerNodes.scrollerNode(?)#shaderParameterComponent", "Shader paramater component", 1)
  crawlerSchema:register(XMLValueType.FLOAT, "crawler.scrollerNodes.scrollerNode(?)#maxSpeed", "Max. speed in m/s", "unlimited")
  crawlerSchema:register(XMLValueType.FLOAT, "crawler.scrollerNodes.scrollerNode(?)#isTrackPart", "Is part of track (Track width is set as scale X)")
  crawlerSchema:register(XMLValueType.NODE_INDEX, "crawler.rotatingParts.rotatingPart(?)#node", "Rotating node")
  crawlerSchema:register(XMLValueType.FLOAT, "crawler.rotatingParts.rotatingPart(?)#radius", "Radius")
  crawlerSchema:register(XMLValueType.FLOAT, "crawler.rotatingParts.rotatingPart(?)#speedScale", "Speed scale")
  crawlerSchema:register(XMLValueType.NODE_INDEX, "crawler.rimColorNodes.rimColorNode(?)#node", "Rim color node")
  crawlerSchema:register(XMLValueType.STRING, "crawler.rimColorNodes.rimColorNode(?)#shaderParameter", "Shader parameter to set")
  crawlerSchema:register(XMLValueType.NODE_INDEX, "crawler.dirtNodes.dirtNode(?)#node", "Nodes that act the same way as wheels and get dirty faster when on field. If not defined everything gets dirty faster.")
  crawlerSchema:register(XMLValueType.BOOL, "crawler.animations.animation(?)#isLeft", "Load for left crawler", false)
  AnimatedVehicle.registerAnimationXMLPaths(crawlerSchema, "crawler.animations.animation(?)")
  ObjectChangeUtil.registerObjectChangeSingleXMLPaths(crawlerSchema, "crawler")
  Crawlers.xmlSchema = crawlerSchema
end
function Crawlers.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadCrawlerFromXML", Crawlers.loadCrawlerFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadCrawlerFromConfigFile", Crawlers.loadCrawlerFromConfigFile)
  SpecializationUtil.registerFunction(vehicleType, "onCrawlerI3DLoaded", Crawlers.onCrawlerI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "getCrawlerWheelMovedDistance", Crawlers.getCrawlerWheelMovedDistance)
end
function Crawlers.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "validateWashableNode", Crawlers.validateWashableNode)
end
function Crawlers.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Crawlers)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Crawlers)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Crawlers)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Crawlers)
  SpecializationUtil.registerEventListener(vehicleType, "onWheelConfigurationChanged", Crawlers)
end
function Crawlers:onLoad(savegame)
  local wheelConfigId = Utils.getNoNil(self.configurations.wheel, 1)
  local v4 = string.format("vehicle.wheels.wheelConfigurations.wheelConfiguration(%d)", wheelConfigId - 1)
  self.spec_crawlers.crawlers = {}
  self.spec_crawlers.sharedLoadRequestIds = {}
  self.spec_crawlers.xmlLoadingHandles = {}
  v5:iterate(v4 .. ".crawlers.crawler", function(self, savegame)
    v2:loadCrawlerFromXML(u0.xmlFile, savegame)
  end)
end
function Crawlers:onLoadFinished(savegame)
  if #self.spec_crawlers.crawlers == 0 then
    SpecializationUtil.removeEventListener(self, "onUpdate", Crawlers)
  end
end
function Crawlers:onDelete()
  if self.spec_crawlers.xmlLoadingHandles ~= nil then
    for v5, v6 in pairs(self.spec_crawlers.xmlLoadingHandles) do
      v5:delete()
      v1.xmlLoadingHandles[v5] = nil
    end
  end
  if v1.sharedLoadRequestIds ~= nil then
    for v5, v6 in ipairs(v1.sharedLoadRequestIds) do
      v7:releaseSharedI3DFile(v6)
    end
    v1.sharedLoadRequestIds = nil
  end
end
function Crawlers:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for v9, v10 in pairs(self.spec_crawlers.crawlers) do
    v10.movedDistance = 0
    if v10.speedReferenceNode ~= nil then
      local v11, v12, v13 = getWorldTranslation(v10.speedReferenceNode)
      if v10.lastPosition == nil then
        v10.lastPosition = {v11, v12, v13}
      end
      local v14, v15, v16 = worldDirectionToLocal(v10.speedReferenceNode, v11 - v10.lastPosition[1], v12 - v10.lastPosition[2], v13 - v10.lastPosition[3])
      if 0.0001 < v16 then
      elseif v16 < -0.0001 then
      end
      local v19 = MathUtil.vector3Length(v14, v15, v16)
      v10.movedDistance = v19 * v17
      v10.lastPosition[1] = v11
      v10.lastPosition[2] = v12
      v10.lastPosition[3] = v13
    else
      v11 = self:getCrawlerWheelMovedDistance(v10, "lastRotationScroll", false)
      v10.movedDistance = v11
    end
    for v14, v15 in pairs(v10.scrollerNodes) do
      local v17 = MathUtil.sign(v10.movedDistance * v15.scrollSpeed)
      v19 = math.abs(v10.movedDistance * v15.scrollSpeed)
      local v18 = math.min(v19, v15.maxSpeed)
      v15.scrollPosition = (v15.scrollPosition + v18 * v17) % v15.scrollLength
      local v18, v19, v20, v21 = getShaderParameter(v15.node, v15.shaderParameterName)
      if v15.shaderParameterComponent == 1 then
      else
      end
      if v15.shaderParameterNamePrev ~= nil then
        v22:setPrevShaderParameter(v15.node, v15.shaderParameterName, v18, v19, v20, v21, false, v15.shaderParameterNamePrev)
      else
        setShaderParameter(v15.node, v15.shaderParameterName, v18, v19, v20, v21, false)
      end
    end
    v11 = self:getCrawlerWheelMovedDistance(v10, "lastRotationRot", true)
    for v15, v16 in pairs(v10.rotatingParts) do
      if v10.wheel ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R17 aux=0x80000000 -> L203
        rotate(v16.node, v11, 0, 0)
      else
        if not (v16.speedScale ~= nil) then
          continue
        end
        rotate(v16.node, v16.speedScale * v10.movedDistance, 0, 0)
      end
    end
  end
end
function Crawlers:onWheelConfigurationChanged(lastConfigurationIndex, newConfigurationIndex)
  for v7, v8 in pairs(self.spec_crawlers.crawlers) do
    local v9 = self:getWashableNodeByCustomIndex(v8)
    if not (v9 ~= nil) then
      continue
    end
    self:setNodeDirtAmount(v9, 0, true)
  end
end
function Crawlers:loadCrawlerFromXML(xmlFile, key)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#crawlerIndex", "Moved to external crawler config file")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#length", "Moved to external crawler config file")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#shaderParameterComponent", "Moved to external crawler config file")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#shaderParameterName", "Moved to external crawler config file")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#scrollLength", "Moved to external crawler config file")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#scrollSpeed", "Moved to external crawler config file")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#index", "Moved to external crawler config file")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. ".rotatingPart", "Moved to external crawler config file")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#linkIndex", key .. "#linkNode")
  local isActiveForInputIgnoreSelection = xmlFile:getValue(key .. "#linkNode", nil, self.components, self.i3dMappings)
  if isActiveForInputIgnoreSelection == nil then
    Logging.xmlWarning(self.xmlFile, "Missing link node for crawler '%s'", key)
    return
  end
  local v5 = xmlFile:getValue(key .. "#isLeft", false)
  v5 = xmlFile:getValue(key .. "#trackWidth", 1)
  v5 = xmlFile:getValue(key .. "#offset", nil, true)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#speedRefWheel", key .. "#wheelIndex")
  v5 = xmlFile:getValue(key .. "#wheelIndex")
  local v6 = xmlFile:getValue(key .. "#wheelIndices", nil, true)
  if v5 == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L223
  end
  if not v6 then
  end
  table.insert(v7, v5)
  isSelected.wheels = {}
  -- TODO: structure LOP_FORNPREP (pc 174, target 210)
  local v11 = self:getWheels()
  if v11[v7[1]] ~= nil then
    v11[v7[1]].syncContactState = true
    table.insert(isSelected.wheels, {wheel = v11[v7[1]]})
    if not v11[v7[1]].isSynchronized then
      Logging.xmlWarning(self.xmlFile, "Wheel '%s' for crawler '%s' in not synchronized! It won't rotate on the client side.", v7[1], key)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 209, target 175)
  if 0 < #isSelected.wheels then
    isSelected.wheel = isSelected.wheels[1].wheel
  end
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, key .. "#speedRefNode", key .. "#speedReferenceNode")
  local v7 = xmlFile:getValue(key .. "#speedReferenceNode", nil, self.components, self.i3dMappings)
  isSelected.speedReferenceNode = v7
  isSelected.movedDistance = 0
  v7 = xmlFile:getValue(key .. "#fieldDirtMultiplier", 75)
  isSelected.fieldDirtMultiplier = v7
  v7 = xmlFile:getValue(key .. "#streetDirtMultiplier", -150)
  isSelected.streetDirtMultiplier = v7
  v7 = xmlFile:getValue(key .. "#minDirtPercentage", 0.35)
  isSelected.minDirtPercentage = v7
  v7 = xmlFile:getValue(key .. "#maxDirtOffset", 0.5)
  isSelected.maxDirtOffset = v7
  local v10 = xmlFile:getValue(key .. "#dirtColorChangeSpeed", 20)
  isSelected.dirtColorChangeSpeed = 1 / v10 * 1000
  v7 = xmlFile:getValue(key .. "#filename")
  self:loadCrawlerFromConfigFile(isSelected, v7, isActiveForInputIgnoreSelection)
end
function Crawlers:loadCrawlerFromConfigFile(crawler, xmlFilename, linkNode)
  local isSelected = Utils.getFilename(xmlFilename, self.baseDirectory)
  isSelected = XMLFile.load("crawlerXml", isSelected, Crawlers.xmlSchema)
  if isSelected ~= nil then
    local v5 = isSelected:getValue("crawler.file#name")
    if v5 ~= nil then
      self.spec_crawlers.xmlLoadingHandles[isSelected] = true
      local v7 = Utils.getFilename(v5, self.baseDirectory)
      crawler.filename = v7
      local v8 = self:loadSubSharedI3DFile(crawler.filename, false, false, self.onCrawlerI3DLoaded, self, {xmlFile = isSelected, crawler = crawler})
      table.insert(self.spec_crawlers.sharedLoadRequestIds, v8)
      return
    end
    Logging.xmlWarning(isSelected, "Failed to open crawler i3d file '%s' in '%s'", v5, xmlFilename)
    isSelected:delete()
    return
  end
  Logging.xmlWarning(self.xmlFile, "Failed to open crawler config file '%s'", xmlFilename)
end
function Crawlers:onCrawlerI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    if args.crawler.isLeft then
    else
    end
    local v8 = isSelected:getValue("crawler.file#" .. v7, nil, i3dNode)
    v5.loadedCrawler = v8
    if v5.loadedCrawler ~= nil then
      link(v5.linkNode, v5.loadedCrawler)
      if v5.translationOffset ~= nil then
        local v10 = unpack(v5.translationOffset)
        setTranslation(...)
      end
      v5.scrollerNodes = {}
      while true do
        v9 = string.format("crawler.scrollerNodes.scrollerNode(%d)", v8)
        v10 = isSelected:hasProperty(v9)
        if not v10 then
          break
        end
        v11 = isSelected:getValue(v9 .. "#node", nil, v5.loadedCrawler)
        if {node = v11}.node ~= nil then
          v11 = isSelected:getValue(v9 .. "#scrollSpeed", 1)
          v11 = isSelected:getValue(v9 .. "#scrollLength", 1)
          v11 = isSelected:getValue(v9 .. "#shaderParameterName", "offsetUV")
          v11 = isSelected:getValue(v9 .. "#shaderParameterNamePrev")
          if {node = v11, scrollSpeed = v11, scrollLength = v11, shaderParameterName = v11, shaderParameterNamePrev = v11}.shaderParameterNamePrev ~= nil then
            v11 = getHasShaderParameter({node = v11, scrollSpeed = v11, scrollLength = v11, shaderParameterName = v11, shaderParameterNamePrev = v11}.node, {node = v11, scrollSpeed = v11, scrollLength = v11, shaderParameterName = v11, shaderParameterNamePrev = v11}.shaderParameterNamePrev)
            -- if v11 then goto L174 end
            v14 = getName({node = v11, scrollSpeed = v11, scrollLength = v11, shaderParameterName = v11, shaderParameterNamePrev = v11}.node)
            Logging.xmlWarning(isSelected, "Node '%s' has no shader parameter '%s' (prev) for crawler node '%s'!", v14, {node = v11, scrollSpeed = v11, scrollLength = v11, shaderParameterName = v11, shaderParameterNamePrev = v11}.shaderParameterNamePrev, v9)
            return nil
          else
            v15 = v15:sub(1, 1)
            v15 = v15:upper()
            v14 = v14:sub(2)
            v12 = getHasShaderParameter({node = v11, scrollSpeed = v11, scrollLength = v11, shaderParameterName = v11, shaderParameterNamePrev = v11}.node, "prev" .. v15 .. v14)
            if v12 then
            end
          end
          v11 = isSelected:getValue(v9 .. "#shaderParameterComponent", 1)
          v10.shaderParameterComponent = v11
          v12 = isSelected:getValue(v9 .. "#maxSpeed", math.huge)
          v10.maxSpeed = v12 / 1000
          v10.scrollPosition = 0
          if v5.trackWidth ~= 1 then
            v11 = isSelected:getValue(v9 .. "#isTrackPart", true)
            if v11 then
              setScale(v10.node, v5.trackWidth, 1, 1)
            end
          end
          table.insert(v5.scrollerNodes, v10)
        end
      end
      v5.rotatingParts = {}
      while true do
        v9 = string.format("crawler.rotatingParts.rotatingPart(%d)", v8)
        v10 = isSelected:hasProperty(v9)
        if not v10 then
          break
        end
        v11 = isSelected:getValue(v9 .. "#node", nil, v5.loadedCrawler)
        if {node = v11}.node ~= nil then
          v11 = isSelected:getValue(v9 .. "#radius")
          v11 = isSelected:getValue(v9 .. "#speedScale")
          if {node = v11, radius = v11, speedScale = v11}.speedScale == nil and {node = v11, radius = v11, speedScale = v11}.radius ~= nil then
          end
          table.insert(v5.rotatingParts, v10)
        end
      end
      v5.hasDirtNodes = false
      v5.dirtNodes = {}
      while true do
        v10 = string.format("crawler.dirtNodes.dirtNode(%d)", v8)
        v11 = isSelected:hasProperty(v10)
        if not v11 then
          break
        end
        v11 = isSelected:getValue(v10 .. "#node", nil, v5.loadedCrawler)
        if v11 ~= nil then
          v5.dirtNodes[v11] = v11
          v5.hasDirtNodes = true
        end
      end
      v11 = ConfigurationUtil.getColorByConfigId(self, "rimColor", self.configurations.rimColor)
      v10 = Utils.getNoNil(v11, self.spec_wheels.rimColor)
      if v10 ~= nil then
        v11 = v9("rimColorNode", v10)
        v5.rimColorNodes = v11
      end
      v5.objectChanges = {}
      ObjectChangeUtil.loadObjectChangeFromXML(isSelected, "crawler", v5.objectChanges, v5.loadedCrawler, self)
      ObjectChangeUtil.setObjectChanges(v5.objectChanges, true)
      while true do
        v12 = string.format("crawler.animations.animation(%d)", v11)
        v13 = isSelected:hasProperty(v12)
        if not v13 then
          break
        end
        v14 = isSelected:getValue(v12 .. "#isLeft", false)
        if v5.isLeft == v14 then
          v14 = self:loadAnimation(isSelected, v12, {}, v5.loadedCrawler)
          if v14 then
            self.spec_animatedVehicle.animations[{}.name] = {}
          end
        end
      end
      table.insert(self.spec_crawlers.crawlers, v5)
    end
    delete(i3dNode)
  elseif not self.isDeleted and not self.isDeleting then
    Logging.xmlWarning(args.xmlFile, "Failed to find crawler in i3d file '%s'", args.crawler.filename)
  end
  isSelected:delete()
  v6.xmlLoadingHandles[isSelected] = nil
end
function Crawlers.getCrawlerWheelMovedDistance(v0, i3dNode, failedReason, args)
  -- TODO: structure LOP_FORNPREP (pc 8, target 96)
  if i3dNode.wheels[1].wheel.contact == Wheels.WHEEL_NO_CONTACT then
    -- cmp-jump LOP_JUMPXEQKN R10 aux=0x80000009 -> L95
  end
  local v10, v11, v12 = getRotation(v9.wheel.driveNode)
  if v9[failedReason] == nil then
    v9[failedReason] = v10
  end
  if v10 - v9[failedReason] < -math.pi then
  elseif math.pi < v10 - v9[failedReason] then
  end
  local v15 = math.abs(v9.wheel.steeringAngle)
  if math.pi * 0.5 < v15 then
  end
  if args then
  end
  if v14 < 0 then
    -- if -v4 >= v14 then goto L94 end
  elseif v14 < isSelected then
  end
  v9[failedReason] = v10
  -- TODO: structure LOP_FORNLOOP (pc 95, target 9)
  if isSelected ~= math.huge then
    return isSelected * v5
  end
  return 0
end
function Crawlers:validateWashableNode(superFunc, node)
  for v7, v8 in pairs(self.spec_crawlers.crawlers) do
    if not v8.hasDirtNodes then
      I3DUtil.getNodesByShaderParam(v8.loadedCrawler, "RDT", v8.dirtNodes)
    end
    if not (v9[node] ~= nil) then
      continue
    end
    return false, self.updateWheelDirtAmount, v8, {wheel = v8.wheel, fieldDirtMultiplier = v8.fieldDirtMultiplier, streetDirtMultiplier = v8.streetDirtMultiplier, minDirtPercentage = v8.minDirtPercentage, maxDirtOffset = v8.maxDirtOffset, dirtColorChangeSpeed = v8.dirtColorChangeSpeed, isSnowNode = true, loadFromSavegameFunc = function(self, superFunc)
      local args = self:getValue(superFunc .. "#snowScale", 0)
      u0.wheel.snowScale = args
      local node, args = node:getDirtColors()
      local isSelected, v5, v6 = MathUtil.vector3ArrayLerp(node, args, u0.wheel.snowScale)
      local v7 = v7:getWashableNodeByCustomIndex(u2)
      v8:setNodeDirtColor(v7, isSelected, v5, v6, true)
    end, saveToSavegameFunc = function(self, superFunc)
      self:setValue(superFunc .. "#snowScale", u0.wheel.snowScale)
    end}
  end
  isSelected = superFunc(self, node)
  return isSelected
end
function Crawlers:getVRamUsageFromXML()
  local i3dNode = self:hasProperty("vehicle.wheels")
  if not i3dNode then
    return 0, 0
  end
  self:iterate("vehicle.wheels.wheelConfigurations.wheelConfiguration", function(self, i3dNode)
    local args = args:hasProperty(i3dNode .. ".crawlers")
    if args then
      u1 = i3dNode .. ".crawlers"
      return false
    end
  end)
  if nil == nil then
    return 0, 0
  end
  self:iterate(i3dNode .. ".crawler", function(self, i3dNode)
    local failedReason = failedReason:getString(i3dNode .. "#filename")
    if failedReason ~= nil and u1[failedReason] == nil then
      u2 = u2 + 1
      u1[failedReason] = true
    end
  end)
  return 0 * Crawlers.VRAM_PER_CRAWLER, 0
end
