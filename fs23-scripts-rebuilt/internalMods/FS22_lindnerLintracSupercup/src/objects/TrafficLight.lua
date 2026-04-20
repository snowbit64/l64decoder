-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TrafficLight = {STATES = {RED = 1, ORANGE = 2, GREEN = 3}, COLOR_NAMES_TO_STATES = {RED = TrafficLight.STATES.RED, ORANGE = TrafficLight.STATES.ORANGE, GREEN = TrafficLight.STATES.GREEN}}
local TrafficLight_mt = Class(TrafficLight)
InitObjectClass(TrafficLight, "TrafficLight")
function TrafficLight:registerXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".lights(?)#color", "the cone state")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".lights(?).light(?)#node", "the light node")
end
function TrafficLight.new(v0, v1, v2, v3)
  local v4 = setmetatable({}, u0)
  v4.nodeId = v1
  v4.isServer = v2
  v4.isClient = v3
  v4.lightsPerState = {}
  registerObjectClassName(v4, "TrafficLight")
  return v4
end
function TrafficLight.delete(v0)
  unregisterObjectClassName(v0)
end
function TrafficLight:loadFromXML(xmlFile, baseKey, components, i3dMappings)
  while true do
    v6 = v6:format(baseKey, v5)
    v7 = xmlFile:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = xmlFile:getValue(v6 .. "#color", "RED")
    if TrafficLight.COLOR_NAMES_TO_STATES[v7] == nil then
      Logging.xmlWarning("Invalid state for traffic light!")
      return
    end
    v10 = self:loadLightsFromXML(xmlFile, v6, {}, components, i3dMappings)
    if v10 then
      if self.lightsPerState[v8] == nil then
        self.lightsPerState[v8] = {}
      end
      table.insert(self.lightsPerState[v8], v9)
    end
  end
end
function TrafficLight.loadLightsFromXML(v0, v1, v2, v3, v4, v5)
  while true do
    v7 = v7:format(v2, v6)
    v8 = v1:hasProperty(v7)
    if not v8 then
      break
    end
    v8 = v1:getValue(v7 .. "#node", nil, v4, v5)
    if v8 ~= nil then
      setVisibility(v8, false)
      table.insert(v3, v8)
    end
  end
  return true
end
function TrafficLight:reset()
  self:setState(TrafficLight.STATES.RED)
end
function TrafficLight:next()
  if TrafficLight.STATES.GREEN < self.lightState + 1 then
  end
  self:setState(v1)
end
function TrafficLight:setState(state)
  self:setLightsState(self.lightsPerState[self.lightState], false)
  self:setLightsState(self.lightsPerState[state], true)
  self.lightState = state
end
function TrafficLight.setLightsState(v0, v1, v2)
  if v1 ~= nil then
    for v6, v7 in ipairs(v1) do
      for v11, v12 in ipairs(v7) do
        setVisibility(v12, v2)
      end
    end
  end
end
