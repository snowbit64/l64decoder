-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableColorable = {}
function PlaceableColorable.prerequisitesPresent(v0)
  return true
end
function PlaceableColorable.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "getAvailableColors", PlaceableColorable.getAvailableColors)
  SpecializationUtil.registerFunction(placeableType, "setColor", PlaceableColorable.setColor)
  SpecializationUtil.registerFunction(placeableType, "getColor", PlaceableColorable.getColor)
  SpecializationUtil.registerFunction(placeableType, "getHasColors", PlaceableColorable.getHasColors)
end
function PlaceableColorable.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableColorable)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableColorable)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableColorable)
end
function PlaceableColorable:registerXMLPaths(v1)
  self:setXMLSpecializationType("Colorable")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".colorable.nodes.node(?)#node", "Bees action radius")
  self:register(XMLValueType.COLOR, v1 .. ".colorable.colors.color(?)#value", "Color")
  self:setXMLSpecializationType()
end
function PlaceableColorable:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("Colorable")
  self:register(XMLValueType.INT, v1 .. ".color", "Active color index")
  self:setXMLSpecializationType()
end
function PlaceableColorable:onLoad(savegame)
  self.spec_colorable.nodes = {}
  self.spec_colorable.colors = {}
  self.spec_colorable.currentColorIndex = 0
  self.xmlFile:iterate("placeable.colorable.nodes.node", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#node", nil, u1.components, u1.i3dMappings)
    if v2 ~= nil then
      local v3 = getHasShaderParameter(v2, "colorScale0")
      if not v3 then
        local v6 = getName(v2)
        Logging.xmlWarning(u0, "Node '%s' has no shader parameter 'colorScale0' for key '%s'!", v6, savegame)
        return
      end
      table.insert(u2.nodes, v2)
    end
  end)
  self.xmlFile:iterate("placeable.colorable.colors.color", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#value", nil, true)
    if v2 ~= nil then
      table.insert(u1.colors, v2)
    end
    if #u1.colors == 255 then
      return false
    end
  end)
  if 0 < #self.spec_colorable.colors then
    self:setColor(1)
  end
  local v4 = self:getHasColors()
  if not v4 then
    SpecializationUtil.removeEventListener(self, "onWriteStream", PlaceableColorable)
    SpecializationUtil.removeEventListener(self, "onReadStream", PlaceableColorable)
  end
end
function PlaceableColorable:onReadStream(streamId, connection)
  local v4 = streamReadUInt8(streamId)
  self.spec_colorable.currentColorIndex = v4
  self:setColor(self.spec_colorable.currentColorIndex)
end
function PlaceableColorable:onWriteStream(streamId, connection)
  streamWriteUInt8(streamId, self.spec_colorable.currentColorIndex)
end
function PlaceableColorable:loadFromXMLFile(xmlFile, key)
  local v7 = math.min(#self.spec_colorable.colors, 1)
  local v4 = xmlFile:getValue(...)
  self.spec_colorable.currentColorIndex = v4
  self:setColor(self.spec_colorable.currentColorIndex)
end
function PlaceableColorable:saveToXMLFile(xmlFile, key, usedModNames)
  local v5 = self:getHasColors()
  if v5 then
    xmlFile:setValue(key .. ".color", self.spec_colorable.currentColorIndex)
  end
end
function PlaceableColorable:getAvailableColors()
  return self.spec_colorable.colors
end
function PlaceableColorable:setColor(index)
  local v3 = math.min(index, #self.spec_colorable.colors)
  self.spec_colorable.currentColorIndex = v3
  if v3 == 0 then
    return
  end
  local v3, v4, v5 = unpack(v2.colors[index])
  for v9, v10 in ipairs(v2.nodes) do
    setShaderParameter(v10, "colorScale0", v3, v4, v5, 1, false)
  end
end
function PlaceableColorable:getColor()
  return self.spec_colorable.currentColorIndex
end
function PlaceableColorable:getHasColors()
  if 0 < #self.spec_colorable.colors and 0 >= #self.spec_colorable.nodes then
  end
  return v1
end
