-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

JigglingParts = {JIGGLING_PART_XML_KEY = "vehicle.jigglingParts.jigglingPart(?)"}
function JigglingParts.prerequisitesPresent(v0)
  return true
end
function JigglingParts.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("JigglingParts")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, JigglingParts.JIGGLING_PART_XML_KEY .. "#node", "Jiggling node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, JigglingParts.JIGGLING_PART_XML_KEY .. "#speedScale", "Speed scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, JigglingParts.JIGGLING_PART_XML_KEY .. "#shaderParameter", "Shader parameter", "amplFreq")
  Vehicle.xmlSchema:register(XMLValueType.STRING, JigglingParts.JIGGLING_PART_XML_KEY .. "#shaderParameterPrev", "Shader parameter previous frame", "prevAmplFreq")
  Vehicle.xmlSchema:register(XMLValueType.INT, JigglingParts.JIGGLING_PART_XML_KEY .. "#shaderParameterComponentSpeed", "Shader component speed index", 4)
  Vehicle.xmlSchema:register(XMLValueType.INT, JigglingParts.JIGGLING_PART_XML_KEY .. "#shaderParameterComponentAmplitude", "Shader component amplitude index", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, JigglingParts.JIGGLING_PART_XML_KEY .. "#amplitudeScale", "Amplitude scale", 4)
  Vehicle.xmlSchema:register(XMLValueType.INT, JigglingParts.JIGGLING_PART_XML_KEY .. "#refNodeIndex", "Ground reference node index")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function JigglingParts.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadJigglingPartsFromXML", JigglingParts.loadJigglingPartsFromXML)
  SpecializationUtil.registerFunction(vehicleType, "isJigglingPartActive", JigglingParts.isJigglingPartActive)
  SpecializationUtil.registerFunction(vehicleType, "updateJigglingPart", JigglingParts.updateJigglingPart)
end
function JigglingParts.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", JigglingParts)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", JigglingParts)
end
function JigglingParts:onLoad(savegame)
  self.spec_jigglingParts.parts = {}
  while true do
    v4 = string.format("vehicle.jigglingParts.jigglingPart(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadJigglingPartsFromXML({}, self.xmlFile, v4)
    if v6 then
      table.insert(v2.parts, {})
    end
  end
  if #v2.parts == 0 then
    SpecializationUtil.removeEventListener(self, "onUpdate", JigglingParts)
  end
end
function JigglingParts:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for v9, v10 in ipairs(self.spec_jigglingParts.parts) do
    local v11 = self:isJigglingPartActive(v10)
    if v11 then
      self:updateJigglingPart(v10, dt, true)
    else
      if not (0 < v10.currentAmplitudeScale) then
        continue
      end
      self:updateJigglingPart(v10, dt, false)
    end
  end
end
function JigglingParts:loadJigglingPartsFromXML(jigglingPart, xmlFile, key)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#index", key .. "#node")
  jigglingPart.currentTime = 0
  jigglingPart.currentAmplitudeScale = 0
  local v4 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  jigglingPart.node = v4
  if jigglingPart.node == nil then
    Logging.xmlWarning(self.xmlFile, "Failed to load node for jiggling part '%s'", key)
    return false
  end
  v4 = xmlFile:getValue(key .. "#speedScale", 1)
  jigglingPart.speedScale = v4
  v4 = xmlFile:getValue(key .. "#shaderParameter", "amplFreq")
  jigglingPart.shaderParameter = v4
  v4 = xmlFile:getValue(key .. "#shaderParameterPrev", "prevAmplFreq")
  jigglingPart.shaderParameterPrev = v4
  v4 = xmlFile:getValue(key .. "#shaderParameterComponentSpeed", 4)
  jigglingPart.shaderParameterComponentSpeed = v4
  v4 = xmlFile:getValue(key .. "#shaderParameterComponentAmplitude", 1)
  jigglingPart.shaderParameterComponentAmplitude = v4
  v4 = xmlFile:getValue(key .. "#amplitudeScale", 4)
  jigglingPart.amplitudeScale = v4
  v4 = xmlFile:getValue(key .. "#refNodeIndex")
  jigglingPart.refNodeIndex = v4
  jigglingPart.values = {0, 0, 0, 0}
  return true
end
function JigglingParts:isJigglingPartActive(jigglingPart)
  if jigglingPart.refNodeIndex ~= nil and jigglingPart.refNode == nil then
    if self.getGroundReferenceNodeFromIndex ~= nil then
      local v2 = self:getGroundReferenceNodeFromIndex(jigglingPart.refNodeIndex)
      if v2 ~= nil then
        jigglingPart.refNode = v2
      end
    end
    if jigglingPart.refNode == nil then
      local v6 = getName(jigglingPart.node)
      Logging.xmlWarning(...)
    end
    jigglingPart.refNodeIndex = nil
  end
  if jigglingPart.refNode ~= nil then
    v2 = self:getIsGroundReferenceNodeActive(jigglingPart.refNode)
    if not v2 then
      return false
    end
  end
  return true
end
function JigglingParts:updateJigglingPart(jigglingPart, dt, groundContact)
  local v8, v9, v10, v11 = getShaderParameter(jigglingPart.node, jigglingPart.shaderParameter)
  jigglingPart.values[1] = v8
  jigglingPart.values[2] = v9
  jigglingPart.values[3] = v10
  jigglingPart.values[4] = v11
  local v15 = self:getLastSpeed()
  jigglingPart.currentTime = jigglingPart.currentTime + dt / 1000 * jigglingPart.speedScale * v15 / 20
  jigglingPart.values[jigglingPart.shaderParameterComponentSpeed] = jigglingPart.currentTime
  if groundContact then
    -- if v1.currentAmplitudeScale >= 1 then goto L71 end
    local v13 = math.min(jigglingPart.currentAmplitudeScale + dt / 100, 1)
    jigglingPart.currentAmplitudeScale = v13
  elseif not groundContact and 0 < jigglingPart.currentAmplitudeScale then
    v13 = math.max(jigglingPart.currentAmplitudeScale - dt / 100, 0)
    jigglingPart.currentAmplitudeScale = v13
  end
  jigglingPart.values[jigglingPart.shaderParameterComponentAmplitude] = jigglingPart.currentAmplitudeScale * jigglingPart.amplitudeScale
  setShaderParameter(jigglingPart.node, jigglingPart.shaderParameter, jigglingPart.values[1], jigglingPart.values[2], jigglingPart.values[3], jigglingPart.values[4], false)
  setShaderParameter(jigglingPart.node, jigglingPart.shaderParameterPrev, v4, v5, v6, v7, false)
end
